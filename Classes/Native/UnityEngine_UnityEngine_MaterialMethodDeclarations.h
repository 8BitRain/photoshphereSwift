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

// UnityEngine.Material
struct Material_t43;
// UnityEngine.Shader
struct Shader_t92;
// UnityEngine.Texture
struct Texture_t15;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" void Material__ctor_m405 (Material_t43 * __this, Shader_t92 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m1106 (Material_t43 * __this, Material_t43 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m356 (Material_t43 * __this, Color_t12  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t15 * Material_get_mainTexture_m1107 (Material_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" void Material_set_mainTexture_m406 (Material_t43 * __this, Texture_t15 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureOffset_m408 (Material_t43 * __this, Vector2_t16  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureScale_m410 (Material_t43 * __this, Vector2_t16  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m1108 (Material_t43 * __this, String_t* ___propertyName, Color_t12  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m1109 (Material_t43 * __this, int32_t ___nameID, Color_t12  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m1110 (Object_t * __this /* static, unused */, Material_t43 * ___self, int32_t ___nameID, Color_t12 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" void Material_SetTexture_m1111 (Material_t43 * __this, String_t* ___propertyName, Texture_t15 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m1112 (Material_t43 * __this, int32_t ___nameID, Texture_t15 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t15 * Material_GetTexture_m1113 (Material_t43 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t15 * Material_GetTexture_m1114 (Material_t43 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureOffset_m1115 (Material_t43 * __this, String_t* ___propertyName, Vector2_t16  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureOffset_m1116 (Object_t * __this /* static, unused */, Material_t43 * ___self, String_t* ___propertyName, Vector2_t16 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureScale_m1117 (Material_t43 * __this, String_t* ___propertyName, Vector2_t16  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureScale_m1118 (Object_t * __this /* static, unused */, Material_t43 * ___self, String_t* ___propertyName, Vector2_t16 * ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m1119 (Material_t43 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m1120 (Material_t43 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m1121 (Material_t43 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m1122 (Material_t43 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m1123 (Material_t43 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" bool Material_SetPass_m516 (Material_t43 * __this, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m1124 (Object_t * __this /* static, unused */, Material_t43 * ___mono, Shader_t92 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m1125 (Object_t * __this /* static, unused */, Material_t43 * ___mono, Material_t43 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
