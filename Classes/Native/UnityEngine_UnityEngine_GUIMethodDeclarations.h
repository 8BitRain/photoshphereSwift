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

// UnityEngine.GUISkin
struct GUISkin_t287;
// UnityEngine.Texture
struct Texture_t15;
// System.String
struct String_t;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t286;
// UnityEngine.GUIStyle
struct GUIStyle_t296;
// UnityEngine.Material
struct Material_t43;
// UnityEngine.GUIContent
struct GUIContent_t290;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScaleMode.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m1714 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m1715 (Object_t * __this /* static, unused */, DateTime_t289  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m1716 (Object_t * __this /* static, unused */, GUISkin_t287 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t287 * GUI_get_skin_m1717 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m1718 (Object_t * __this /* static, unused */, GUISkin_t287 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m402 (Object_t * __this /* static, unused */, Rect_t19  ___position, Texture_t15 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C" void GUI_DrawTexture_m1719 (Object_t * __this /* static, unused */, Rect_t19  ___position, Texture_t15 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m1720 (Object_t * __this /* static, unused */, Rect_t19  ___position, Texture_t15 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m365 (Object_t * __this /* static, unused */, Rect_t19  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m1721 (Object_t * __this /* static, unused */, WindowFunction_t286 * ___func, int32_t ___id, GUISkin_t287 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t296 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t12  GUI_get_color_m1722 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m1723 (Object_t * __this /* static, unused */, Color_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m1724 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t43 * GUI_get_blendMaterial_m1725 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t43 * GUI_get_blitMaterial_m1726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m1727 (Object_t * __this /* static, unused */, Rect_t19  ___position, GUIContent_t290 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m1728 (Object_t * __this /* static, unused */, Rect_t19 * ___position, GUIContent_t290 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
