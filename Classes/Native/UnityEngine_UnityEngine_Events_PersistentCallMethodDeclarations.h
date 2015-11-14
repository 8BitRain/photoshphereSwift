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

// UnityEngine.Events.PersistentCall
struct PersistentCall_t376;
// UnityEngine.Object
struct Object_t89;
struct Object_t89_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t371;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t372;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t381;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C" void PersistentCall__ctor_m2037 (PersistentCall_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t89 * PersistentCall_get_target_m2038 (PersistentCall_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m2039 (PersistentCall_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m2040 (PersistentCall_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t371 * PersistentCall_get_arguments_m2041 (PersistentCall_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C" bool PersistentCall_IsValid_m2042 (PersistentCall_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C" BaseInvokableCall_t372 * PersistentCall_GetRuntimeCall_m2043 (PersistentCall_t376 * __this, UnityEventBase_t381 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C" BaseInvokableCall_t372 * PersistentCall_GetObjectCall_m2044 (Object_t * __this /* static, unused */, Object_t89 * ___target, MethodInfo_t * ___method, ArgumentCache_t371 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
