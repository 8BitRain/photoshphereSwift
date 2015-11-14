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

// UnityEngine.Mesh
struct Mesh_t42;
// UnityEngine.Texture
struct Texture_t15;
// UnityEngine.Material
struct Material_t43;
// UnityEngine.RenderTexture
struct RenderTexture_t13;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Graphics_DrawMeshNow_m517 (Object_t * __this /* static, unused */, Mesh_t42 * ___mesh, Vector3_t5  ___position, Quaternion_t59  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow1_m812 (Object_t * __this /* static, unused */, Mesh_t42 * ___mesh, Vector3_t5  ___position, Quaternion_t59  ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow1_m813 (Object_t * __this /* static, unused */, Mesh_t42 * ___mesh, Vector3_t5 * ___position, Quaternion_t59 * ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m629 (Object_t * __this /* static, unused */, Rect_t19  ___screenRect, Texture_t15 * ___texture, Material_t43 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m814 (Object_t * __this /* static, unused */, Rect_t19  ___screenRect, Texture_t15 * ___texture, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t43 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m815 (Object_t * __this /* static, unused */, Rect_t19  ___screenRect, Texture_t15 * ___texture, Rect_t19  ___sourceRect, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t43 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m816 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t167 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m612 (Object_t * __this /* static, unused */, Texture_t15 * ___source, RenderTexture_t13 * ___dest, Material_t43 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m817 (Object_t * __this /* static, unused */, Texture_t15 * ___source, RenderTexture_t13 * ___dest, Material_t43 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m818 (Object_t * __this /* static, unused */, Texture_t15 * ___source, RenderTexture_t13 * ___dest, Material_t43 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
