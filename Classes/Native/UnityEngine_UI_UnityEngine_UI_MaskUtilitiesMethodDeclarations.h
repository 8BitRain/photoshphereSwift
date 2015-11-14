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

// UnityEngine.Component
struct Component_t134;
// UnityEngine.Transform
struct Transform_t40;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t564;
// UnityEngine.UI.IClippable
struct IClippable_t647;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t572;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m2885 (Object_t * __this /* static, unused */, Component_t134 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m2886 (Object_t * __this /* static, unused */, Component_t134 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t40 * MaskUtilities_FindRootSortOverrideCanvas_m2887 (Object_t * __this /* static, unused */, Transform_t40 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m2888 (Object_t * __this /* static, unused */, Transform_t40 * ___transform, Transform_t40 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t564 * MaskUtilities_GetRectMaskForClippable_m2889 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m2890 (Object_t * __this /* static, unused */, RectMask2D_t564 * ___clipper, List_1_t572 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
