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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t2371;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18062_gshared (Comparison_1_t2371 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m18062(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2371 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m18062_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18063_gshared (Comparison_1_t2371 * __this, CustomAttributeNamedArgument_t1316  ___x, CustomAttributeNamedArgument_t1316  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m18063(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2371 *, CustomAttributeNamedArgument_t1316 , CustomAttributeNamedArgument_t1316 , const MethodInfo*))Comparison_1_Invoke_m18063_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18064_gshared (Comparison_1_t2371 * __this, CustomAttributeNamedArgument_t1316  ___x, CustomAttributeNamedArgument_t1316  ___y, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m18064(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2371 *, CustomAttributeNamedArgument_t1316 , CustomAttributeNamedArgument_t1316 , AsyncCallback_t10 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m18064_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18065_gshared (Comparison_1_t2371 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m18065(__this, ___result, method) (( int32_t (*) (Comparison_1_t2371 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m18065_gshared)(__this, ___result, method)
