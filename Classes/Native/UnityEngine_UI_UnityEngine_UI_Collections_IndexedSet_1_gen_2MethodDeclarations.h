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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2140;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1868;
// System.Object[]
struct ObjectU5BU5D_t127;
// System.Predicate`1<System.Object>
struct Predicate_1_t1807;
// System.Comparison`1<System.Object>
struct Comparison_1_t1813;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m15238_gshared (IndexedSet_1_t2140 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m15238(__this, method) (( void (*) (IndexedSet_1_t2140 *, const MethodInfo*))IndexedSet_1__ctor_m15238_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15240_gshared (IndexedSet_1_t2140 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15240(__this, method) (( Object_t * (*) (IndexedSet_1_t2140 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15240_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m15242_gshared (IndexedSet_1_t2140 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m15242(__this, ___item, method) (( void (*) (IndexedSet_1_t2140 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m15242_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m15244_gshared (IndexedSet_1_t2140 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m15244(__this, ___item, method) (( bool (*) (IndexedSet_1_t2140 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m15244_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m15246_gshared (IndexedSet_1_t2140 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m15246(__this, method) (( Object_t* (*) (IndexedSet_1_t2140 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m15246_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m15248_gshared (IndexedSet_1_t2140 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m15248(__this, method) (( void (*) (IndexedSet_1_t2140 *, const MethodInfo*))IndexedSet_1_Clear_m15248_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m15250_gshared (IndexedSet_1_t2140 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m15250(__this, ___item, method) (( bool (*) (IndexedSet_1_t2140 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m15250_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m15252_gshared (IndexedSet_1_t2140 * __this, ObjectU5BU5D_t127* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m15252(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2140 *, ObjectU5BU5D_t127*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m15252_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m15254_gshared (IndexedSet_1_t2140 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m15254(__this, method) (( int32_t (*) (IndexedSet_1_t2140 *, const MethodInfo*))IndexedSet_1_get_Count_m15254_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m15256_gshared (IndexedSet_1_t2140 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m15256(__this, method) (( bool (*) (IndexedSet_1_t2140 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m15256_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m15258_gshared (IndexedSet_1_t2140 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m15258(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2140 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m15258_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m15260_gshared (IndexedSet_1_t2140 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m15260(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2140 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m15260_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m15262_gshared (IndexedSet_1_t2140 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m15262(__this, ___index, method) (( void (*) (IndexedSet_1_t2140 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m15262_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m15264_gshared (IndexedSet_1_t2140 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m15264(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2140 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m15264_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m15266_gshared (IndexedSet_1_t2140 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m15266(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2140 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m15266_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m15267_gshared (IndexedSet_1_t2140 * __this, Predicate_1_t1807 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m15267(__this, ___match, method) (( void (*) (IndexedSet_1_t2140 *, Predicate_1_t1807 *, const MethodInfo*))IndexedSet_1_RemoveAll_m15267_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m15268_gshared (IndexedSet_1_t2140 * __this, Comparison_1_t1813 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m15268(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2140 *, Comparison_1_t1813 *, const MethodInfo*))IndexedSet_1_Sort_m15268_gshared)(__this, ___sortLayoutFunction, method)
