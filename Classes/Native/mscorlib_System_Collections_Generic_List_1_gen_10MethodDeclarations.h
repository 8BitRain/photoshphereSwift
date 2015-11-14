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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t271;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2431;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2432;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2433;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t1971;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t411;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t1975;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t1978;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m13051_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1__ctor_m13051(__this, method) (( void (*) (List_1_t271 *, const MethodInfo*))List_1__ctor_m13051_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13052_gshared (List_1_t271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13052(__this, ___collection, method) (( void (*) (List_1_t271 *, Object_t*, const MethodInfo*))List_1__ctor_m13052_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2129_gshared (List_1_t271 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2129(__this, ___capacity, method) (( void (*) (List_1_t271 *, int32_t, const MethodInfo*))List_1__ctor_m2129_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m13053_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13053(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13053_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13054_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13054(__this, method) (( Object_t* (*) (List_1_t271 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13055_gshared (List_1_t271 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13055(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t271 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13055_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13056_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13056(__this, method) (( Object_t * (*) (List_1_t271 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13057_gshared (List_1_t271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13057(__this, ___item, method) (( int32_t (*) (List_1_t271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13057_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13058_gshared (List_1_t271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13058(__this, ___item, method) (( bool (*) (List_1_t271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13058_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13059_gshared (List_1_t271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13059(__this, ___item, method) (( int32_t (*) (List_1_t271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13059_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13060_gshared (List_1_t271 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13060(__this, ___index, ___item, method) (( void (*) (List_1_t271 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13060_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13061_gshared (List_1_t271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13061(__this, ___item, method) (( void (*) (List_1_t271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13061_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13062_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13062(__this, method) (( bool (*) (List_1_t271 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13063_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13063(__this, method) (( bool (*) (List_1_t271 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13063_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13064_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13064(__this, method) (( Object_t * (*) (List_1_t271 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13065_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13065(__this, method) (( bool (*) (List_1_t271 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13066_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13066(__this, method) (( bool (*) (List_1_t271 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13066_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13067_gshared (List_1_t271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13067(__this, ___index, method) (( Object_t * (*) (List_1_t271 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13067_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13068_gshared (List_1_t271 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13068(__this, ___index, ___value, method) (( void (*) (List_1_t271 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13068_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m13069_gshared (List_1_t271 * __this, UICharInfo_t266  ___item, const MethodInfo* method);
#define List_1_Add_m13069(__this, ___item, method) (( void (*) (List_1_t271 *, UICharInfo_t266 , const MethodInfo*))List_1_Add_m13069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13070_gshared (List_1_t271 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13070(__this, ___newCount, method) (( void (*) (List_1_t271 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13070_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13071_gshared (List_1_t271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13071(__this, ___collection, method) (( void (*) (List_1_t271 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13071_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13072_gshared (List_1_t271 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13072(__this, ___enumerable, method) (( void (*) (List_1_t271 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13072_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13073_gshared (List_1_t271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13073(__this, ___collection, method) (( void (*) (List_1_t271 *, Object_t*, const MethodInfo*))List_1_AddRange_m13073_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1971 * List_1_AsReadOnly_m13074_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13074(__this, method) (( ReadOnlyCollection_1_t1971 * (*) (List_1_t271 *, const MethodInfo*))List_1_AsReadOnly_m13074_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m13075_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_Clear_m13075(__this, method) (( void (*) (List_1_t271 *, const MethodInfo*))List_1_Clear_m13075_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m13076_gshared (List_1_t271 * __this, UICharInfo_t266  ___item, const MethodInfo* method);
#define List_1_Contains_m13076(__this, ___item, method) (( bool (*) (List_1_t271 *, UICharInfo_t266 , const MethodInfo*))List_1_Contains_m13076_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13077_gshared (List_1_t271 * __this, UICharInfoU5BU5D_t411* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13077(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t271 *, UICharInfoU5BU5D_t411*, int32_t, const MethodInfo*))List_1_CopyTo_m13077_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t266  List_1_Find_m13078_gshared (List_1_t271 * __this, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_Find_m13078(__this, ___match, method) (( UICharInfo_t266  (*) (List_1_t271 *, Predicate_1_t1975 *, const MethodInfo*))List_1_Find_m13078_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13079_gshared (Object_t * __this /* static, unused */, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13079(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1975 *, const MethodInfo*))List_1_CheckMatch_m13079_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13080_gshared (List_1_t271 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13080(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t271 *, int32_t, int32_t, Predicate_1_t1975 *, const MethodInfo*))List_1_GetIndex_m13080_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t1970  List_1_GetEnumerator_m13081_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13081(__this, method) (( Enumerator_t1970  (*) (List_1_t271 *, const MethodInfo*))List_1_GetEnumerator_m13081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13082_gshared (List_1_t271 * __this, UICharInfo_t266  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13082(__this, ___item, method) (( int32_t (*) (List_1_t271 *, UICharInfo_t266 , const MethodInfo*))List_1_IndexOf_m13082_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13083_gshared (List_1_t271 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13083(__this, ___start, ___delta, method) (( void (*) (List_1_t271 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13083_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13084_gshared (List_1_t271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13084(__this, ___index, method) (( void (*) (List_1_t271 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13084_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13085_gshared (List_1_t271 * __this, int32_t ___index, UICharInfo_t266  ___item, const MethodInfo* method);
#define List_1_Insert_m13085(__this, ___index, ___item, method) (( void (*) (List_1_t271 *, int32_t, UICharInfo_t266 , const MethodInfo*))List_1_Insert_m13085_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13086_gshared (List_1_t271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13086(__this, ___collection, method) (( void (*) (List_1_t271 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13086_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m13087_gshared (List_1_t271 * __this, UICharInfo_t266  ___item, const MethodInfo* method);
#define List_1_Remove_m13087(__this, ___item, method) (( bool (*) (List_1_t271 *, UICharInfo_t266 , const MethodInfo*))List_1_Remove_m13087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13088_gshared (List_1_t271 * __this, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13088(__this, ___match, method) (( int32_t (*) (List_1_t271 *, Predicate_1_t1975 *, const MethodInfo*))List_1_RemoveAll_m13088_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13089_gshared (List_1_t271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13089(__this, ___index, method) (( void (*) (List_1_t271 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13089_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m13090_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_Reverse_m13090(__this, method) (( void (*) (List_1_t271 *, const MethodInfo*))List_1_Reverse_m13090_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m13091_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_Sort_m13091(__this, method) (( void (*) (List_1_t271 *, const MethodInfo*))List_1_Sort_m13091_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13092_gshared (List_1_t271 * __this, Comparison_1_t1978 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13092(__this, ___comparison, method) (( void (*) (List_1_t271 *, Comparison_1_t1978 *, const MethodInfo*))List_1_Sort_m13092_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t411* List_1_ToArray_m13093_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_ToArray_m13093(__this, method) (( UICharInfoU5BU5D_t411* (*) (List_1_t271 *, const MethodInfo*))List_1_ToArray_m13093_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m13094_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13094(__this, method) (( void (*) (List_1_t271 *, const MethodInfo*))List_1_TrimExcess_m13094_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13095_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13095(__this, method) (( int32_t (*) (List_1_t271 *, const MethodInfo*))List_1_get_Capacity_m13095_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13096_gshared (List_1_t271 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13096(__this, ___value, method) (( void (*) (List_1_t271 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13096_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m13097_gshared (List_1_t271 * __this, const MethodInfo* method);
#define List_1_get_Count_m13097(__this, method) (( int32_t (*) (List_1_t271 *, const MethodInfo*))List_1_get_Count_m13097_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t266  List_1_get_Item_m13098_gshared (List_1_t271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13098(__this, ___index, method) (( UICharInfo_t266  (*) (List_1_t271 *, int32_t, const MethodInfo*))List_1_get_Item_m13098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13099_gshared (List_1_t271 * __this, int32_t ___index, UICharInfo_t266  ___value, const MethodInfo* method);
#define List_1_set_Item_m13099(__this, ___index, ___value, method) (( void (*) (List_1_t271 *, int32_t, UICharInfo_t266 , const MethodInfo*))List_1_set_Item_m13099_gshared)(__this, ___index, ___value, method)
