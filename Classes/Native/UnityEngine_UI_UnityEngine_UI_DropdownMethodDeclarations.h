﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Dropdown
struct Dropdown_t531;
// UnityEngine.RectTransform
struct RectTransform_t193;
// UnityEngine.UI.Text
struct Text_t3;
// UnityEngine.UI.Image
struct Image_t523;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t527;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t528;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t57;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t99;
// UnityEngine.GameObject
struct GameObject_t56;
// UnityEngine.Canvas
struct Canvas_t275;
// UnityEngine.UI.Dropdown/DropdownItem
struct DropdownItem_t522;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t525;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t533;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// UnityEngine.UI.Toggle
struct Toggle_t524;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Dropdown::.ctor()
extern "C" void Dropdown__ctor_m2525 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Dropdown::get_template()
extern "C" RectTransform_t193 * Dropdown_get_template_m2526 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_template(UnityEngine.RectTransform)
extern "C" void Dropdown_set_template_m2527 (Dropdown_t531 * __this, RectTransform_t193 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_captionText()
extern "C" Text_t3 * Dropdown_get_captionText_m2528 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_captionText_m2529 (Dropdown_t531 * __this, Text_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_captionImage()
extern "C" Image_t523 * Dropdown_get_captionImage_m2530 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_captionImage_m2531 (Dropdown_t531 * __this, Image_t523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_itemText()
extern "C" Text_t3 * Dropdown_get_itemText_m2532 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_itemText_m2533 (Dropdown_t531 * __this, Text_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_itemImage()
extern "C" Image_t523 * Dropdown_get_itemImage_m2534 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_itemImage_m2535 (Dropdown_t531 * __this, Image_t523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
extern "C" List_1_t527 * Dropdown_get_options_m2536 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
extern "C" void Dropdown_set_options_m2537 (Dropdown_t531 * __this, List_1_t527 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
extern "C" DropdownEvent_t528 * Dropdown_get_onValueChanged_m2538 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_onValueChanged(UnityEngine.UI.Dropdown/DropdownEvent)
extern "C" void Dropdown_set_onValueChanged_m2539 (Dropdown_t531 * __this, DropdownEvent_t528 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
extern "C" int32_t Dropdown_get_value_m2540 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
extern "C" void Dropdown_set_value_m2541 (Dropdown_t531 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Awake()
extern "C" void Dropdown_Awake_m2542 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Refresh()
extern "C" void Dropdown_Refresh_m2543 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetupTemplate()
extern "C" void Dropdown_SetupTemplate_m2544 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Dropdown_OnPointerClick_m2545 (Dropdown_t531 * __this, PointerEventData_t57 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnSubmit_m2546 (Dropdown_t531 * __this, BaseEventData_t99 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnCancel_m2547 (Dropdown_t531 * __this, BaseEventData_t99 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Show()
extern "C" void Dropdown_Show_m2548 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateBlocker(UnityEngine.Canvas)
extern "C" GameObject_t56 * Dropdown_CreateBlocker_m2549 (Dropdown_t531 * __this, Canvas_t275 * ___rootCanvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyBlocker(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyBlocker_m2550 (Dropdown_t531 * __this, GameObject_t56 * ___blocker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateDropdownList(UnityEngine.GameObject)
extern "C" GameObject_t56 * Dropdown_CreateDropdownList_m2551 (Dropdown_t531 * __this, GameObject_t56 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyDropdownList(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyDropdownList_m2552 (Dropdown_t531 * __this, GameObject_t56 * ___dropdownList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::CreateItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" DropdownItem_t522 * Dropdown_CreateItem_m2553 (Dropdown_t531 * __this, DropdownItem_t522 * ___itemTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" void Dropdown_DestroyItem_m2554 (Dropdown_t531 * __this, DropdownItem_t522 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::AddItem(UnityEngine.UI.Dropdown/OptionData,System.Boolean,UnityEngine.UI.Dropdown/DropdownItem,System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>)
extern "C" DropdownItem_t522 * Dropdown_AddItem_m2555 (Dropdown_t531 * __this, OptionData_t525 * ___data, bool ___selected, DropdownItem_t522 * ___itemTemplate, List_1_t533 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m2556 (Dropdown_t531 * __this, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m2557 (Dropdown_t531 * __this, float ___duration, float ___start, float ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetAlpha(System.Single)
extern "C" void Dropdown_SetAlpha_m2558 (Dropdown_t531 * __this, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Hide()
extern "C" void Dropdown_Hide_m2559 (Dropdown_t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Dropdown::DelayedDestroyDropdownList(System.Single)
extern "C" Object_t * Dropdown_DelayedDestroyDropdownList_m2560 (Dropdown_t531 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSelectItem(UnityEngine.UI.Toggle)
extern "C" void Dropdown_OnSelectItem_m2561 (Dropdown_t531 * __this, Toggle_t524 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
