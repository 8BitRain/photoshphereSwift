#include "UnityAppController+Rendering.h"
#include "UnityAppController+ViewHandling.h"

#include "Unity/InternalProfiler.h"
#include "Unity/UnityMetalSupport.h"
#include "Unity/DisplayManager.h"
#include "Unity/EAGLContextHelper.h"

#include "UI/UnityView.h"

#include <dlfcn.h>

// On some devices presenting render buffer may sporadically take long time to complete even with very simple scenes.
// In these cases display link still fires at steady frame rate but input processing becomes stuttering.
// As a workaround this switch disables display link during rendering a frame.
// If you are running a GPU bound scene and experience frame drop you may want to disable this switch.
#define ENABLE_DISPLAY_LINK_PAUSING 1
#define ENABLE_DISPATCH 1

// _glesContextCreated was renamed to _renderingInited
extern bool	_renderingInited;
extern bool	_unityAppReady;
extern bool	_skipPresent;
extern bool	_didResignActive;

static int _renderingAPI = 0;
static int SelectRenderingAPIImpl();


@implementation UnityAppController (Rendering)

- (void)createDisplayLink
{
	int animationFrameInterval = (int)(60.0f / (float)UnityGetTargetFPS());
	assert(animationFrameInterval >= 1);

	_displayLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(repaintDisplayLink)];
	[_displayLink setFrameInterval:animationFrameInterval];
	[_displayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
}

- (void)repaintDisplayLink
{
#if ENABLE_DISPLAY_LINK_PAUSING || ENABLE_DISPATCH
	_displayLink.paused = YES;
#endif

#if ENABLE_DISPATCH
	dispatch_async(dispatch_get_main_queue(), ^{
#endif
		if(!_didResignActive)
			[self repaint];
#if ENABLE_DISPLAY_LINK_PAUSING || ENABLE_DISPATCH
		_displayLink.paused = NO;
#endif
#if ENABLE_DISPATCH
	});
#endif
}

- (void)repaint
{
	[self checkOrientationRequest];
	[_unityView recreateGLESSurfaceIfNeeded];
	UnityDeliverUIEvents();

	if (!UnityIsPaused())
		UnityRepaint();
}

- (void)callbackGfxInited
{
	InitRendering();
	_renderingInited = true;

	[self shouldAttachRenderDelegate];
	[_renderDelegate mainDisplayInited:_mainDisplay.surface];
	[_unityView recreateGLESSurface];

	_mainDisplay.surface->allowScreenshot = 1;
}

- (void)callbackPresent:(const UnityFrameStats*)frameStats
{
	if(_skipPresent || _didResignActive)
		return;

	Profiler_FrameEnd();
	[[DisplayManager Instance] present];
	Profiler_FrameUpdate(frameStats);
}

- (void)callbackFramerateChange:(int)targetFPS
{
	if(targetFPS <= 0)
		targetFPS = 60;

	int animationFrameInterval = (60.0f / targetFPS);
	if (animationFrameInterval < 1)
		animationFrameInterval = 1;

	[_displayLink setFrameInterval:animationFrameInterval];
}

- (void)selectRenderingAPI
{
	NSAssert(_renderingAPI == 0, @"[UnityAppController selectRenderingApi] called twice");
	_renderingAPI = SelectRenderingAPIImpl();
}

- (UnityRenderingAPI)renderingAPI
{
	NSAssert(_renderingAPI != 0, @"[UnityAppController renderingAPI] called before [UnityAppController selectRenderingApi]");
	return (UnityRenderingAPI)_renderingAPI;
}

@end


extern "C" void UnityGfxInitedCallback()
{
	[GetAppController() callbackGfxInited];
}
extern "C" void UnityPresentContextCallback(struct UnityFrameStats const* unityFrameStats)
{
	[GetAppController() callbackPresent:unityFrameStats];
}
extern "C" void UnityFramerateChangeCallback(int targetFPS)
{
	[GetAppController() callbackFramerateChange:targetFPS];
}

extern "C" void UnityInitMainScreenRenderingCallback()
{
	{
		extern void QueryTargetResolution(int* targetW, int* targetH);

		int resW=0, resH=0;
		QueryTargetResolution(&resW, &resH);
		UnityRequestRenderingResolution(resW, resH);
	}

	DisplayConnection* display = GetAppController().mainDisplay;
	[display initRendering];
}



static NSBundle*		_MetalBundle	= nil;
static id<MTLDevice>	_MetalDevice	= nil;
static EAGLContext*		_GlesContext	= nil;

static bool IsMetalSupported(int /*api*/)
{
	_MetalBundle = [NSBundle bundleWithPath:@"/System/Library/Frameworks/Metal.framework"];
	if(_MetalBundle)
	{
		[_MetalBundle load];
		_MetalDevice = ((MTLCreateSystemDefaultDeviceFunc)::dlsym(dlopen(0, RTLD_LOCAL|RTLD_LAZY), "MTLCreateSystemDefaultDevice"))();
		if(_MetalDevice)
			return true;
	}

	[_MetalBundle unload];
	return false;
}

static bool IsGlesSupported(int api)
{
	_GlesContext = [[EAGLContext alloc] initWithAPI:(EAGLRenderingAPI)api];
	return _GlesContext != nil;
}

typedef bool(*CheckSupportedFunc)(int);


static int SelectRenderingAPIImpl()
{
#if UNITY_CAN_USE_METAL
	const bool	canSupportMetal = _ios80orNewer;
#else
	const bool	canSupportMetal = false;
#endif

	// Get list of graphics APIs to try from player settings
	const int kMaxAPIs = 3;
	int apis[kMaxAPIs];
	const int apiCount = UnityGetRenderingAPIs (kMaxAPIs, apis);

	// Go over them and try each
	for (int i = 0; i < apiCount; ++i)
	{
		int api = apis[i];
		// Metal
		if (api == apiMetal)
		{
			if (!canSupportMetal)
				continue;
			if (!IsMetalSupported(0))
				continue;
			return api;
		}
		// GLES3
		if (api == apiOpenGLES3)
		{
			if (!_ios70orNewer)
				continue;
			if (!IsGlesSupported(kEAGLRenderingAPIOpenGLES3))
				continue;
			return api;
		}
		// GLES2
		if (api == apiOpenGLES2)
		{
			if (!IsGlesSupported(kEAGLRenderingAPIOpenGLES2))
				continue;
			return api;
		}
	}

	return 0;
}

extern "C" NSBundle*			UnityGetMetalBundle()		{ return _MetalBundle; }
extern "C" MTLDeviceRef			UnityGetMetalDevice()		{ return _MetalDevice; }
extern "C" MTLCommandQueueRef	UnityGetMetalCommandQueue()	{ return  ((UnityDisplaySurfaceMTL*)GetMainDisplaySurface())->commandQueue; }

extern "C" EAGLContext*			UnityGetDataContextEAGL()	{ return _GlesContext; }
extern "C" int					UnitySelectedRenderingAPI()	{ return _renderingAPI; }

extern "C" UnityRenderBuffer	UnityBackbufferColor()		{ return GetMainDisplaySurface()->unityColorBuffer; }
extern "C" UnityRenderBuffer	UnityBackbufferDepth()		{ return GetMainDisplaySurface()->unityDepthBuffer; }



extern "C" void UnityRepaint()
{
	@autoreleasepool
	{
		// this will handle running on metal just fine (nop)
		EAGLContextSetCurrentAutoRestore autorestore(GetMainDisplaySurface());

		Profiler_FrameStart();
		UnityInputProcess();

		UnityStartFrame(GetMainDisplaySurface()->unityColorBuffer, GetMainDisplaySurface()->unityDepthBuffer);

		UnityPlayerLoop();

		[[DisplayManager Instance] endFrameRendering];
		UnityEndFrame();
	}
}
