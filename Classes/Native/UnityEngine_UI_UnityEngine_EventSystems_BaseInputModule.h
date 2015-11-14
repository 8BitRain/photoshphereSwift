#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t100;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t488;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t98;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t99;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t55  : public UIBehaviour_t464
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t100 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t488 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t98 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t99 * ___m_BaseEventData_5;
};
