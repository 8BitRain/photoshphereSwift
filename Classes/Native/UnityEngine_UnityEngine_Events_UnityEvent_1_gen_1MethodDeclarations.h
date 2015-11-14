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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t509;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t643;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t372;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m3548_gshared (UnityEvent_1_t509 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3548(__this, method) (( void (*) (UnityEvent_1_t509 *, const MethodInfo*))UnityEvent_1__ctor_m3548_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m3550_gshared (UnityEvent_1_t509 * __this, UnityAction_1_t643 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m3550(__this, ___call, method) (( void (*) (UnityEvent_1_t509 *, UnityAction_1_t643 *, const MethodInfo*))UnityEvent_1_AddListener_m3550_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m3649_gshared (UnityEvent_1_t509 * __this, UnityAction_1_t643 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m3649(__this, ___call, method) (( void (*) (UnityEvent_1_t509 *, UnityAction_1_t643 *, const MethodInfo*))UnityEvent_1_RemoveListener_m3649_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15235_gshared (UnityEvent_1_t509 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m15235(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t509 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m15235_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t372 * UnityEvent_1_GetDelegate_m15236_gshared (UnityEvent_1_t509 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15236(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t372 * (*) (UnityEvent_1_t509 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m15236_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t372 * UnityEvent_1_GetDelegate_m15237_gshared (Object_t * __this /* static, unused */, UnityAction_1_t643 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15237(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t372 * (*) (Object_t * /* static, unused */, UnityAction_1_t643 *, const MethodInfo*))UnityEvent_1_GetDelegate_m15237_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3549_gshared (UnityEvent_1_t509 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3549(__this, ___arg0, method) (( void (*) (UnityEvent_1_t509 *, float, const MethodInfo*))UnityEvent_1_Invoke_m3549_gshared)(__this, ___arg0, method)
