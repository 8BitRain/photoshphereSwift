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

// CardboardiOSDevice
struct CardboardiOSDevice_t70;
// System.Collections.Generic.List`1<System.String>
struct List_1_t80;
// System.Uri
struct Uri_t29;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BaseVRDevice_DisplayMetrics.h"

// System.Void CardboardiOSDevice::.ctor()
extern "C" void CardboardiOSDevice__ctor_m318 (CardboardiOSDevice_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice/DisplayMetrics CardboardiOSDevice::GetDisplayMetrics()
extern "C" DisplayMetrics_t69  CardboardiOSDevice_GetDisplayMetrics_m319 (CardboardiOSDevice_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool CardboardiOSDevice_SupportsNativeDistortionCorrection_m320 (CardboardiOSDevice_t70 * __this, List_1_t80 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetVRModeEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetVRModeEnabled_m321 (CardboardiOSDevice_t70 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetSettingsButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetSettingsButtonEnabled_m322 (CardboardiOSDevice_t70 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetAlignmentMarkerEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetAlignmentMarkerEnabled_m323 (CardboardiOSDevice_t70 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetVRBackButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetVRBackButtonEnabled_m324 (CardboardiOSDevice_t70 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetShowVrBackButtonOnlyInVR(System.Boolean)
extern "C" void CardboardiOSDevice_SetShowVrBackButtonOnlyInVR_m325 (CardboardiOSDevice_t70 * __this, bool ___only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetTapIsTrigger(System.Boolean)
extern "C" void CardboardiOSDevice_SetTapIsTrigger_m326 (CardboardiOSDevice_t70 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool CardboardiOSDevice_SetDefaultDeviceProfile_m327 (CardboardiOSDevice_t70 * __this, Uri_t29 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::Init()
extern "C" void CardboardiOSDevice_Init_m328 (CardboardiOSDevice_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::OnFocus(System.Boolean)
extern "C" void CardboardiOSDevice_OnFocus_m329 (CardboardiOSDevice_t70 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::ShowSettingsDialog()
extern "C" void CardboardiOSDevice_ShowSettingsDialog_m330 (CardboardiOSDevice_t70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOpenGLAPI()
extern "C" bool CardboardiOSDevice_isOpenGLAPI_m331 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setVRModeEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setVRModeEnabled_m332 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setShowVrBackButtonOnlyInVR(System.Boolean)
extern "C" void CardboardiOSDevice_setShowVrBackButtonOnlyInVR_m333 (Object_t * __this /* static, unused */, bool ___only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSettingsButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setSettingsButtonEnabled_m334 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setAlignmentMarkerEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setAlignmentMarkerEnabled_m335 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setVRBackButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setVRBackButtonEnabled_m336 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setSyncWithCardboardEnabled_m337 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setOnboardingDone()
extern "C" void CardboardiOSDevice_setOnboardingDone_m338 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOnboardingDone()
extern "C" bool CardboardiOSDevice_isOnboardingDone_m339 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchSettingsDialog()
extern "C" void CardboardiOSDevice_launchSettingsDialog_m340 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchOnboardingDialog()
extern "C" void CardboardiOSDevice_launchOnboardingDialog_m341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardiOSDevice::getScreenDPI()
extern "C" float CardboardiOSDevice_getScreenDPI_m342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
