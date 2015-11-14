#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BaseVRDevice
struct BaseVRDevice_t33;
// CardboardProfile
struct CardboardProfile_t53;
// System.Collections.Generic.List`1<System.String>
struct List_1_t80;
// UnityEngine.RenderTexture
struct RenderTexture_t13;
// System.Uri
struct Uri_t29;
// Pose3D
struct Pose3D_t58;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BaseVRDevice_DisplayMetrics.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void BaseVRDevice::.ctor()
extern "C" void BaseVRDevice__ctor_m294 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::.cctor()
extern "C" void BaseVRDevice__cctor_m295 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile BaseVRDevice::get_Profile()
extern "C" CardboardProfile_t53 * BaseVRDevice_get_Profile_m296 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::set_Profile(CardboardProfile)
extern "C" void BaseVRDevice_set_Profile_m297 (BaseVRDevice_t33 * __this, CardboardProfile_t53 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice/DisplayMetrics BaseVRDevice::GetDisplayMetrics()
extern "C" DisplayMetrics_t69  BaseVRDevice_GetDisplayMetrics_m298 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseVRDevice_SupportsNativeDistortionCorrection_m299 (BaseVRDevice_t33 * __this, List_1_t80 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseVRDevice_SupportsNativeUILayer_m300 (BaseVRDevice_t33 * __this, List_1_t80 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsUnityRenderEvent()
extern "C" bool BaseVRDevice_SupportsUnityRenderEvent_m301 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen()
extern "C" RenderTexture_t13 * BaseVRDevice_CreateStereoScreen_m302 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool BaseVRDevice_SetDefaultDeviceProfile_m303 (BaseVRDevice_t33 * __this, Uri_t29 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::ShowSettingsDialog()
extern "C" void BaseVRDevice_ShowSettingsDialog_m304 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D BaseVRDevice::GetHeadPose()
extern "C" Pose3D_t58 * BaseVRDevice_GetHeadPose_m305 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D BaseVRDevice::GetEyePose(Cardboard/Eye)
extern "C" Pose3D_t58 * BaseVRDevice_GetEyePose_m306 (BaseVRDevice_t33 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::GetProjection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t37  BaseVRDevice_GetProjection_m307 (BaseVRDevice_t33 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect BaseVRDevice::GetViewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t19  BaseVRDevice_GetViewport_m308 (BaseVRDevice_t33 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void BaseVRDevice_SetTouchCoordinates_m309 (BaseVRDevice_t33 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnPause(System.Boolean)
extern "C" void BaseVRDevice_OnPause_m310 (BaseVRDevice_t33 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnFocus(System.Boolean)
extern "C" void BaseVRDevice_OnFocus_m311 (BaseVRDevice_t33 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnLevelLoaded(System.Int32)
extern "C" void BaseVRDevice_OnLevelLoaded_m312 (BaseVRDevice_t33 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnApplicationQuit()
extern "C" void BaseVRDevice_OnApplicationQuit_m313 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::Destroy()
extern "C" void BaseVRDevice_Destroy_m314 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::ComputeEyesFromProfile()
extern "C" void BaseVRDevice_ComputeEyesFromProfile_m315 (BaseVRDevice_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t37  BaseVRDevice_MakeProjection_m316 (Object_t * __this /* static, unused */, float ___l, float ___t, float ___r, float ___b, float ___n, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice BaseVRDevice::GetDevice()
extern "C" BaseVRDevice_t33 * BaseVRDevice_GetDevice_m317 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
