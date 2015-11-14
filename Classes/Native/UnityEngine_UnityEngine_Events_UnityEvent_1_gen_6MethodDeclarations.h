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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2100;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1844;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t372;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m14621_gshared (UnityEvent_1_t2100 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m14621(__this, method) (( void (*) (UnityEvent_1_t2100 *, const MethodInfo*))UnityEvent_1__ctor_m14621_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m14622_gshared (UnityEvent_1_t2100 * __this, UnityAction_1_t1844 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m14622(__this, ___call, method) (( void (*) (UnityEvent_1_t2100 *, UnityAction_1_t1844 *, const MethodInfo*))UnityEvent_1_AddListener_m14622_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14623_gshared (UnityEvent_1_t2100 * __this, UnityAction_1_t1844 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14623(__this, ___call, method) (( void (*) (UnityEvent_1_t2100 *, UnityAction_1_t1844 *, const MethodInfo*))UnityEvent_1_RemoveListener_m14623_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m14624_gshared (UnityEvent_1_t2100 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m14624(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2100 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m14624_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t372 * UnityEvent_1_GetDelegate_m14625_gshared (UnityEvent_1_t2100 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14625(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t372 * (*) (UnityEvent_1_t2100 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m14625_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t372 * UnityEvent_1_GetDelegate_m14626_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1844 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14626(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t372 * (*) (Object_t * /* static, unused */, UnityAction_1_t1844 *, const MethodInfo*))UnityEvent_1_GetDelegate_m14626_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m14627_gshared (UnityEvent_1_t2100 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m14627(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2100 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m14627_gshared)(__this, ___arg0, method)
