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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t672;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t130;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1868;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2409;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1797;
// System.Object[]
struct ObjectU5BU5D_t127;
// System.Predicate`1<System.Object>
struct Predicate_1_t1807;
// System.Comparison`1<System.Object>
struct Comparison_1_t1813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10950_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1__ctor_m10950(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1__ctor_m10950_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10952_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10952(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1__ctor_m10952_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10954_gshared (List_1_t672 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10954(__this, ___capacity, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1__ctor_m10954_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10956_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10956(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10956_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10958_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10958(__this, method) (( Object_t* (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10958_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10960_gshared (List_1_t672 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10960(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t672 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10960_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10962_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10962(__this, method) (( Object_t * (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10964_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10964(__this, ___item, method) (( int32_t (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10964_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10966_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10966(__this, ___item, method) (( bool (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10966_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10968_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10968(__this, ___item, method) (( int32_t (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10968_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10970_gshared (List_1_t672 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10970(__this, ___index, ___item, method) (( void (*) (List_1_t672 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10970_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10972_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10972(__this, ___item, method) (( void (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10972_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10974_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10974(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10974_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10976_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10976(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10976_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10978_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10978(__this, method) (( Object_t * (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10980_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10980(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10982_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10982(__this, method) (( bool (*) (List_1_t672 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10982_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10984_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10984(__this, ___index, method) (( Object_t * (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10984_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10986_gshared (List_1_t672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10986(__this, ___index, ___value, method) (( void (*) (List_1_t672 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10986_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10988_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10988(__this, ___item, method) (( void (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_Add_m10988_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10990_gshared (List_1_t672 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10990(__this, ___newCount, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10990_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10992_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10992(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10992_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10994_gshared (List_1_t672 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10994(__this, ___enumerable, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10994_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10996_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10996(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_AddRange_m10996_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1797 * List_1_AsReadOnly_m10998_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10998(__this, method) (( ReadOnlyCollection_1_t1797 * (*) (List_1_t672 *, const MethodInfo*))List_1_AsReadOnly_m10998_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11000_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_Clear_m11000(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_Clear_m11000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11002_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11002(__this, ___item, method) (( bool (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_Contains_m11002_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11004_gshared (List_1_t672 * __this, ObjectU5BU5D_t127* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11004(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t672 *, ObjectU5BU5D_t127*, int32_t, const MethodInfo*))List_1_CopyTo_m11004_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11006_gshared (List_1_t672 * __this, Predicate_1_t1807 * ___match, const MethodInfo* method);
#define List_1_Find_m11006(__this, ___match, method) (( Object_t * (*) (List_1_t672 *, Predicate_1_t1807 *, const MethodInfo*))List_1_Find_m11006_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11008_gshared (Object_t * __this /* static, unused */, Predicate_1_t1807 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11008(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1807 *, const MethodInfo*))List_1_CheckMatch_m11008_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11010_gshared (List_1_t672 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1807 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11010(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t672 *, int32_t, int32_t, Predicate_1_t1807 *, const MethodInfo*))List_1_GetIndex_m11010_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1801  List_1_GetEnumerator_m11012_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11012(__this, method) (( Enumerator_t1801  (*) (List_1_t672 *, const MethodInfo*))List_1_GetEnumerator_m11012_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11014_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11014(__this, ___item, method) (( int32_t (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11014_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11016_gshared (List_1_t672 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11016(__this, ___start, ___delta, method) (( void (*) (List_1_t672 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11016_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11018_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11018(__this, ___index, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11018_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11020_gshared (List_1_t672 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11020(__this, ___index, ___item, method) (( void (*) (List_1_t672 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11020_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11022_gshared (List_1_t672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11022(__this, ___collection, method) (( void (*) (List_1_t672 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11022_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11024_gshared (List_1_t672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11024(__this, ___item, method) (( bool (*) (List_1_t672 *, Object_t *, const MethodInfo*))List_1_Remove_m11024_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11026_gshared (List_1_t672 * __this, Predicate_1_t1807 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11026(__this, ___match, method) (( int32_t (*) (List_1_t672 *, Predicate_1_t1807 *, const MethodInfo*))List_1_RemoveAll_m11026_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11028_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11028(__this, ___index, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11028_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11030_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_Reverse_m11030(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_Reverse_m11030_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11032_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_Sort_m11032(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_Sort_m11032_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11034_gshared (List_1_t672 * __this, Comparison_1_t1813 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11034(__this, ___comparison, method) (( void (*) (List_1_t672 *, Comparison_1_t1813 *, const MethodInfo*))List_1_Sort_m11034_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t127* List_1_ToArray_m11035_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_ToArray_m11035(__this, method) (( ObjectU5BU5D_t127* (*) (List_1_t672 *, const MethodInfo*))List_1_ToArray_m11035_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11037_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11037(__this, method) (( void (*) (List_1_t672 *, const MethodInfo*))List_1_TrimExcess_m11037_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11039_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11039(__this, method) (( int32_t (*) (List_1_t672 *, const MethodInfo*))List_1_get_Capacity_m11039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11041_gshared (List_1_t672 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11041(__this, ___value, method) (( void (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11041_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11043_gshared (List_1_t672 * __this, const MethodInfo* method);
#define List_1_get_Count_m11043(__this, method) (( int32_t (*) (List_1_t672 *, const MethodInfo*))List_1_get_Count_m11043_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11045_gshared (List_1_t672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11045(__this, ___index, method) (( Object_t * (*) (List_1_t672 *, int32_t, const MethodInfo*))List_1_get_Item_m11045_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11047_gshared (List_1_t672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11047(__this, ___index, ___value, method) (( void (*) (List_1_t672 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11047_gshared)(__this, ___index, ___value, method)
