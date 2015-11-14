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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2004;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1992;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13502_gshared (ShimEnumerator_t2004 * __this, Dictionary_2_t1992 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13502(__this, ___host, method) (( void (*) (ShimEnumerator_t2004 *, Dictionary_2_t1992 *, const MethodInfo*))ShimEnumerator__ctor_m13502_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13503_gshared (ShimEnumerator_t2004 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13503(__this, method) (( bool (*) (ShimEnumerator_t2004 *, const MethodInfo*))ShimEnumerator_MoveNext_m13503_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1048  ShimEnumerator_get_Entry_m13504_gshared (ShimEnumerator_t2004 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13504(__this, method) (( DictionaryEntry_t1048  (*) (ShimEnumerator_t2004 *, const MethodInfo*))ShimEnumerator_get_Entry_m13504_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13505_gshared (ShimEnumerator_t2004 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13505(__this, method) (( Object_t * (*) (ShimEnumerator_t2004 *, const MethodInfo*))ShimEnumerator_get_Key_m13505_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13506_gshared (ShimEnumerator_t2004 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13506(__this, method) (( Object_t * (*) (ShimEnumerator_t2004 *, const MethodInfo*))ShimEnumerator_get_Value_m13506_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13507_gshared (ShimEnumerator_t2004 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13507(__this, method) (( Object_t * (*) (ShimEnumerator_t2004 *, const MethodInfo*))ShimEnumerator_get_Current_m13507_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m13508_gshared (ShimEnumerator_t2004 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13508(__this, method) (( void (*) (ShimEnumerator_t2004 *, const MethodInfo*))ShimEnumerator_Reset_m13508_gshared)(__this, method)
