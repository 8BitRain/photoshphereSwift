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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t403;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2427;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2415;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2428;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1932;
// System.Int32[]
struct Int32U5BU5D_t68;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1938;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1942;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m12592_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1__ctor_m12592(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1__ctor_m12592_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12593_gshared (List_1_t403 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m12593(__this, ___collection, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1__ctor_m12593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12594_gshared (List_1_t403 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12594(__this, ___capacity, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1__ctor_m12594_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m12595_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12595(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12595_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12596_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12596(__this, method) (( Object_t* (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12596_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12597_gshared (List_1_t403 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12597(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t403 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12597_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12598_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12598(__this, method) (( Object_t * (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12598_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12599_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12599(__this, ___item, method) (( int32_t (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12599_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12600_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12600(__this, ___item, method) (( bool (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12600_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12601_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12601(__this, ___item, method) (( int32_t (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12601_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12602_gshared (List_1_t403 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12602(__this, ___index, ___item, method) (( void (*) (List_1_t403 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12602_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12603_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12603(__this, ___item, method) (( void (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12603_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12604_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12604(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12605_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12605(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12605_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12606_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12606(__this, method) (( Object_t * (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12607_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12607(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12608_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12608(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12608_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12609_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12609(__this, ___index, method) (( Object_t * (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12609_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12610_gshared (List_1_t403 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12610(__this, ___index, ___value, method) (( void (*) (List_1_t403 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12610_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m12611_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m12611(__this, ___item, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_Add_m12611_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12612_gshared (List_1_t403 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12612(__this, ___newCount, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12612_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12613_gshared (List_1_t403 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12613(__this, ___collection, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12613_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12614_gshared (List_1_t403 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12614(__this, ___enumerable, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12614_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3707_gshared (List_1_t403 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3707(__this, ___collection, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_AddRange_m3707_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1932 * List_1_AsReadOnly_m12615_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12615(__this, method) (( ReadOnlyCollection_1_t1932 * (*) (List_1_t403 *, const MethodInfo*))List_1_AsReadOnly_m12615_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m12616_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_Clear_m12616(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_Clear_m12616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m12617_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m12617(__this, ___item, method) (( bool (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_Contains_m12617_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12618_gshared (List_1_t403 * __this, Int32U5BU5D_t68* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12618(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t403 *, Int32U5BU5D_t68*, int32_t, const MethodInfo*))List_1_CopyTo_m12618_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m12619_gshared (List_1_t403 * __this, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_Find_m12619(__this, ___match, method) (( int32_t (*) (List_1_t403 *, Predicate_1_t1938 *, const MethodInfo*))List_1_Find_m12619_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12620_gshared (Object_t * __this /* static, unused */, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12620(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1938 *, const MethodInfo*))List_1_CheckMatch_m12620_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12621_gshared (List_1_t403 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12621(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t403 *, int32_t, int32_t, Predicate_1_t1938 *, const MethodInfo*))List_1_GetIndex_m12621_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1931  List_1_GetEnumerator_m12622_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12622(__this, method) (( Enumerator_t1931  (*) (List_1_t403 *, const MethodInfo*))List_1_GetEnumerator_m12622_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12623_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m12623(__this, ___item, method) (( int32_t (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_IndexOf_m12623_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12624_gshared (List_1_t403 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12624(__this, ___start, ___delta, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12624_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12625_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12625(__this, ___index, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12625_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12626_gshared (List_1_t403 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m12626(__this, ___index, ___item, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m12626_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12627_gshared (List_1_t403 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12627(__this, ___collection, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12627_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m12628_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m12628(__this, ___item, method) (( bool (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_Remove_m12628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12629_gshared (List_1_t403 * __this, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12629(__this, ___match, method) (( int32_t (*) (List_1_t403 *, Predicate_1_t1938 *, const MethodInfo*))List_1_RemoveAll_m12629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12630_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12630(__this, ___index, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12630_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m12631_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_Reverse_m12631(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_Reverse_m12631_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m12632_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_Sort_m12632(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_Sort_m12632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12633_gshared (List_1_t403 * __this, Comparison_1_t1942 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12633(__this, ___comparison, method) (( void (*) (List_1_t403 *, Comparison_1_t1942 *, const MethodInfo*))List_1_Sort_m12633_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t68* List_1_ToArray_m12634_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_ToArray_m12634(__this, method) (( Int32U5BU5D_t68* (*) (List_1_t403 *, const MethodInfo*))List_1_ToArray_m12634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m12635_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12635(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_TrimExcess_m12635_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12636_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12636(__this, method) (( int32_t (*) (List_1_t403 *, const MethodInfo*))List_1_get_Capacity_m12636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12637_gshared (List_1_t403 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12637(__this, ___value, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12637_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m12638_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_get_Count_m12638(__this, method) (( int32_t (*) (List_1_t403 *, const MethodInfo*))List_1_get_Count_m12638_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m12639_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12639(__this, ___index, method) (( int32_t (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_get_Item_m12639_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12640_gshared (List_1_t403 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m12640(__this, ___index, ___value, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m12640_gshared)(__this, ___index, ___value, method)
