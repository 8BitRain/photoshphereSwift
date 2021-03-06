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

// System.MulticastDelegate
struct MulticastDelegate_t8;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1730;
// System.Delegate
struct Delegate_t88;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6349 (MulticastDelegate_t8 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6350 (MulticastDelegate_t8 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6351 (MulticastDelegate_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1730* MulticastDelegate_GetInvocationList_m6352 (MulticastDelegate_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t88 * MulticastDelegate_CombineImpl_m6353 (MulticastDelegate_t8 * __this, Delegate_t88 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6354 (MulticastDelegate_t8 * __this, MulticastDelegate_t8 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t8 * MulticastDelegate_KPM_m6355 (Object_t * __this /* static, unused */, MulticastDelegate_t8 * ___needle, MulticastDelegate_t8 * ___haystack, MulticastDelegate_t8 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t88 * MulticastDelegate_RemoveImpl_m6356 (MulticastDelegate_t8 * __this, Delegate_t88 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
