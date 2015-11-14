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

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t292;
// UnityEngine.GUIStyle
struct GUIStyle_t296;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t416;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t293;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m1737 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t292 * GUILayoutUtility_SelectIDList_m1738 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m1739 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m1740 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t296 * ___style, GUILayoutOptionU5BU5D_t416* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m1741 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m1742 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m1743 (Object_t * __this /* static, unused */, GUILayoutGroup_t293 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m1744 (Object_t * __this /* static, unused */, GUILayoutGroup_t293 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t296 * GUILayoutUtility_get_spaceStyle_m1745 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t19  GUILayoutUtility_Internal_GetWindowRect_m1746 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m1747 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t19  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m1748 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t19 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
