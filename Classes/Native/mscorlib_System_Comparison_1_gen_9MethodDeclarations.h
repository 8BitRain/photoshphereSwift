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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t1900;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12156_gshared (Comparison_1_t1900 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12156(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1900 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12156_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12157_gshared (Comparison_1_t1900 * __this, Vector3_t5  ___x, Vector3_t5  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12157(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1900 *, Vector3_t5 , Vector3_t5 , const MethodInfo*))Comparison_1_Invoke_m12157_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12158_gshared (Comparison_1_t1900 * __this, Vector3_t5  ___x, Vector3_t5  ___y, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12158(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1900 *, Vector3_t5 , Vector3_t5 , AsyncCallback_t10 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12158_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12159_gshared (Comparison_1_t1900 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12159(__this, ___result, method) (( int32_t (*) (Comparison_1_t1900 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12159_gshared)(__this, ___result, method)
