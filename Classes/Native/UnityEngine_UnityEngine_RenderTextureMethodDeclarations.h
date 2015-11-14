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

// UnityEngine.RenderTexture
struct RenderTexture_t13;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture__ctor_m383 (RenderTexture_t13 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C" void RenderTexture_Internal_CreateRenderTexture_m837 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetWidth_m838 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetWidth_m839 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m840 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetHeight_m841 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C" void RenderTexture_Internal_SetSRGBReadWrite_m842 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___mono, bool ___sRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C" int32_t RenderTexture_get_width_m379 (RenderTexture_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C" void RenderTexture_set_width_m843 (RenderTexture_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C" int32_t RenderTexture_get_height_m381 (RenderTexture_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C" void RenderTexture_set_height_m844 (RenderTexture_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C" void RenderTexture_set_depth_m845 (RenderTexture_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture_set_format_m846 (RenderTexture_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
extern "C" void RenderTexture_set_antiAliasing_m653 (RenderTexture_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::Create()
extern "C" bool RenderTexture_Create_m384 (RenderTexture_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::INTERNAL_CALL_Create(UnityEngine.RenderTexture)
extern "C" bool RenderTexture_INTERNAL_CALL_Create_m847 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Release()
extern "C" void RenderTexture_Release_m377 (RenderTexture_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_Release(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_Release_m848 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::IsCreated()
extern "C" bool RenderTexture_IsCreated_m539 (RenderTexture_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::INTERNAL_CALL_IsCreated(UnityEngine.RenderTexture)
extern "C" bool RenderTexture_INTERNAL_CALL_IsCreated_m849 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::DiscardContents()
extern "C" void RenderTexture_DiscardContents_m518 (RenderTexture_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_DiscardContents_m850 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
extern "C" RenderTexture_t13 * RenderTexture_get_active_m388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C" void RenderTexture_set_active_m389 (Object_t * __this /* static, unused */, RenderTexture_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
