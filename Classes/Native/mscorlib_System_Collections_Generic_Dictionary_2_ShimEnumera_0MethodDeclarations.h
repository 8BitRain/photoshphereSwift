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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2021;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2012;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13698_gshared (ShimEnumerator_t2021 * __this, Dictionary_2_t2012 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13698(__this, ___host, method) (( void (*) (ShimEnumerator_t2021 *, Dictionary_2_t2012 *, const MethodInfo*))ShimEnumerator__ctor_m13698_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13699_gshared (ShimEnumerator_t2021 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13699(__this, method) (( bool (*) (ShimEnumerator_t2021 *, const MethodInfo*))ShimEnumerator_MoveNext_m13699_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1048  ShimEnumerator_get_Entry_m13700_gshared (ShimEnumerator_t2021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13700(__this, method) (( DictionaryEntry_t1048  (*) (ShimEnumerator_t2021 *, const MethodInfo*))ShimEnumerator_get_Entry_m13700_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13701_gshared (ShimEnumerator_t2021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13701(__this, method) (( Object_t * (*) (ShimEnumerator_t2021 *, const MethodInfo*))ShimEnumerator_get_Key_m13701_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13702_gshared (ShimEnumerator_t2021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13702(__this, method) (( Object_t * (*) (ShimEnumerator_t2021 *, const MethodInfo*))ShimEnumerator_get_Value_m13702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13703_gshared (ShimEnumerator_t2021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13703(__this, method) (( Object_t * (*) (ShimEnumerator_t2021 *, const MethodInfo*))ShimEnumerator_get_Current_m13703_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13704_gshared (ShimEnumerator_t2021 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13704(__this, method) (( void (*) (ShimEnumerator_t2021 *, const MethodInfo*))ShimEnumerator_Reset_m13704_gshared)(__this, method)
