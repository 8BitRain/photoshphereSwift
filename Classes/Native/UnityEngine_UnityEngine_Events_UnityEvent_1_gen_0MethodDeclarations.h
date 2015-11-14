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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t506;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t642;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t372;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m3545_gshared (UnityEvent_1_t506 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3545(__this, method) (( void (*) (UnityEvent_1_t506 *, const MethodInfo*))UnityEvent_1__ctor_m3545_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m3547_gshared (UnityEvent_1_t506 * __this, UnityAction_1_t642 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m3547(__this, ___call, method) (( void (*) (UnityEvent_1_t506 *, UnityAction_1_t642 *, const MethodInfo*))UnityEvent_1_AddListener_m3547_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m15224_gshared (UnityEvent_1_t506 * __this, UnityAction_1_t642 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m15224(__this, ___call, method) (( void (*) (UnityEvent_1_t506 *, UnityAction_1_t642 *, const MethodInfo*))UnityEvent_1_RemoveListener_m15224_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15225_gshared (UnityEvent_1_t506 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m15225(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t506 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m15225_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t372 * UnityEvent_1_GetDelegate_m15226_gshared (UnityEvent_1_t506 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15226(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t372 * (*) (UnityEvent_1_t506 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m15226_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t372 * UnityEvent_1_GetDelegate_m15227_gshared (Object_t * __this /* static, unused */, UnityAction_1_t642 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15227(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t372 * (*) (Object_t * /* static, unused */, UnityAction_1_t642 *, const MethodInfo*))UnityEvent_1_GetDelegate_m15227_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3546_gshared (UnityEvent_1_t506 * __this, Color_t12  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3546(__this, ___arg0, method) (( void (*) (UnityEvent_1_t506 *, Color_t12 , const MethodInfo*))UnityEvent_1_Invoke_m3546_gshared)(__this, ___arg0, method)
