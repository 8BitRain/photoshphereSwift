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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2311;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t982;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17518_gshared (ShimEnumerator_t2311 * __this, Dictionary_2_t982 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17518(__this, ___host, method) (( void (*) (ShimEnumerator_t2311 *, Dictionary_2_t982 *, const MethodInfo*))ShimEnumerator__ctor_m17518_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17519_gshared (ShimEnumerator_t2311 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17519(__this, method) (( bool (*) (ShimEnumerator_t2311 *, const MethodInfo*))ShimEnumerator_MoveNext_m17519_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1048  ShimEnumerator_get_Entry_m17520_gshared (ShimEnumerator_t2311 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17520(__this, method) (( DictionaryEntry_t1048  (*) (ShimEnumerator_t2311 *, const MethodInfo*))ShimEnumerator_get_Entry_m17520_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17521_gshared (ShimEnumerator_t2311 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17521(__this, method) (( Object_t * (*) (ShimEnumerator_t2311 *, const MethodInfo*))ShimEnumerator_get_Key_m17521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17522_gshared (ShimEnumerator_t2311 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17522(__this, method) (( Object_t * (*) (ShimEnumerator_t2311 *, const MethodInfo*))ShimEnumerator_get_Value_m17522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17523_gshared (ShimEnumerator_t2311 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17523(__this, method) (( Object_t * (*) (ShimEnumerator_t2311 *, const MethodInfo*))ShimEnumerator_get_Current_m17523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m17524_gshared (ShimEnumerator_t2311 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17524(__this, method) (( void (*) (ShimEnumerator_t2311 *, const MethodInfo*))ShimEnumerator_Reset_m17524_gshared)(__this, method)
