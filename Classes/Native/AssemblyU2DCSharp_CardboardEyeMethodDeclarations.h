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

// CardboardEye
struct CardboardEye_t34;
// StereoController
struct StereoController_t32;
// CardboardHead
struct CardboardHead_t39;
// UnityEngine.Camera
struct Camera_t31;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void CardboardEye::.ctor()
extern "C" void CardboardEye__ctor_m139 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C" StereoController_t32 * CardboardEye_get_Controller_m140 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C" CardboardHead_t39 * CardboardEye_get_Head_m141 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardEye::get_camera()
extern "C" Camera_t31 * CardboardEye_get_camera_m142 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::set_camera(UnityEngine.Camera)
extern "C" void CardboardEye_set_camera_m143 (CardboardEye_t34 * __this, Camera_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C" void CardboardEye_Awake_m144 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C" void CardboardEye_Start_m145 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&)
extern "C" void CardboardEye_FixProjection_m146 (CardboardEye_t34 * __this, Matrix4x4_t37 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardEye::FixViewport(UnityEngine.Rect)
extern "C" Rect_t19  CardboardEye_FixViewport_m147 (CardboardEye_t34 * __this, Rect_t19  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::UpdateStereoValues()
extern "C" void CardboardEye_UpdateStereoValues_m148 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::SetupStereo()
extern "C" void CardboardEye_SetupStereo_m149 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m150 (CardboardEye_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m151 (CardboardEye_t34 * __this, StereoController_t32 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
