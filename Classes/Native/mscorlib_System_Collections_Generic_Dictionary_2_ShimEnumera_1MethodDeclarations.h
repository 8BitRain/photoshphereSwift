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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2041;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2032;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13984_gshared (ShimEnumerator_t2041 * __this, Dictionary_2_t2032 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13984(__this, ___host, method) (( void (*) (ShimEnumerator_t2041 *, Dictionary_2_t2032 *, const MethodInfo*))ShimEnumerator__ctor_m13984_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13985_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13985(__this, method) (( bool (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_MoveNext_m13985_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1048  ShimEnumerator_get_Entry_m13986_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13986(__this, method) (( DictionaryEntry_t1048  (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Entry_m13986_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13987_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13987(__this, method) (( Object_t * (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Key_m13987_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13988_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13988(__this, method) (( Object_t * (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Value_m13988_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13989_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13989(__this, method) (( Object_t * (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Current_m13989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13990_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13990(__this, method) (( void (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_Reset_m13990_gshared)(__this, method)
