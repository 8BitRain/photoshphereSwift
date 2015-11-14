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

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t500;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t57;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C" void TouchInputModule__ctor_m2392 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C" bool TouchInputModule_get_allowActivationOnStandalone_m2393 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C" void TouchInputModule_set_allowActivationOnStandalone_m2394 (TouchInputModule_t500 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_forceModuleActive()
extern "C" bool TouchInputModule_get_forceModuleActive_m2395 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_forceModuleActive(System.Boolean)
extern "C" void TouchInputModule_set_forceModuleActive_m2396 (TouchInputModule_t500 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C" void TouchInputModule_UpdateModule_m2397 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C" bool TouchInputModule_IsModuleSupported_m2398 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C" bool TouchInputModule_ShouldActivateModule_m2399 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C" bool TouchInputModule_UseFakeInput_m2400 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C" void TouchInputModule_Process_m2401 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C" void TouchInputModule_FakeTouches_m2402 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C" void TouchInputModule_ProcessTouchEvents_m2403 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C" void TouchInputModule_ProcessTouchPress_m2404 (TouchInputModule_t500 * __this, PointerEventData_t57 * ___pointerEvent, bool ___pressed, bool ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C" void TouchInputModule_DeactivateModule_m2405 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C" String_t* TouchInputModule_ToString_m2406 (TouchInputModule_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
