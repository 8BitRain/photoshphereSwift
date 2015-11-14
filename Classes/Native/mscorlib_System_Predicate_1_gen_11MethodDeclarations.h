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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t1917;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12434_gshared (Predicate_1_t1917 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12434(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1917 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12434_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12435_gshared (Predicate_1_t1917 * __this, Vector2_t16  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12435(__this, ___obj, method) (( bool (*) (Predicate_1_t1917 *, Vector2_t16 , const MethodInfo*))Predicate_1_Invoke_m12435_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12436_gshared (Predicate_1_t1917 * __this, Vector2_t16  ___obj, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12436(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1917 *, Vector2_t16 , AsyncCallback_t10 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12436_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12437_gshared (Predicate_1_t1917 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12437(__this, ___result, method) (( bool (*) (Predicate_1_t1917 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12437_gshared)(__this, ___result, method)
