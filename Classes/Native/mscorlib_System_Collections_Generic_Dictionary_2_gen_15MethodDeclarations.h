﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t982;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2011;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2477;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2478;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2306;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17416_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17416(__this, method) (( void (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2__ctor_m17416_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17417_gshared (Dictionary_2_t982 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17417(__this, ___comparer, method) (( void (*) (Dictionary_2_t982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17417_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17418_gshared (Dictionary_2_t982 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17418(__this, ___capacity, method) (( void (*) (Dictionary_2_t982 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17418_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17419_gshared (Dictionary_2_t982 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17419(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t982 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2__ctor_m17419_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17420_gshared (Dictionary_2_t982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17420(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17420_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17421_gshared (Dictionary_2_t982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17421(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17421_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17422_gshared (Dictionary_2_t982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17422(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17422_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17423_gshared (Dictionary_2_t982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17423(__this, ___key, method) (( bool (*) (Dictionary_2_t982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17423_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17424_gshared (Dictionary_2_t982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17424(__this, ___key, method) (( void (*) (Dictionary_2_t982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17424_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17425_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17425(__this, method) (( bool (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17426_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17426(__this, method) (( Object_t * (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17426_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17427_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17427(__this, method) (( bool (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17427_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17428_gshared (Dictionary_2_t982 * __this, KeyValuePair_2_t2304  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17428(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t982 *, KeyValuePair_2_t2304 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17428_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17429_gshared (Dictionary_2_t982 * __this, KeyValuePair_2_t2304  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17429(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t982 *, KeyValuePair_2_t2304 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17429_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17430_gshared (Dictionary_2_t982 * __this, KeyValuePair_2U5BU5D_t2477* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17430(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t982 *, KeyValuePair_2U5BU5D_t2477*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17430_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17431_gshared (Dictionary_2_t982 * __this, KeyValuePair_2_t2304  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17431(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t982 *, KeyValuePair_2_t2304 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17431_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17432_gshared (Dictionary_2_t982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17432(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17432_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17433_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17433(__this, method) (( Object_t * (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17433_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17434_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17434(__this, method) (( Object_t* (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17434_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17435_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17435(__this, method) (( Object_t * (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17435_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17436_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17436(__this, method) (( int32_t (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_get_Count_m17436_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17437_gshared (Dictionary_2_t982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17437(__this, ___key, method) (( int32_t (*) (Dictionary_2_t982 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17437_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17438_gshared (Dictionary_2_t982 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17438(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t982 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17439_gshared (Dictionary_2_t982 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17439(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t982 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17439_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17440_gshared (Dictionary_2_t982 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17440(__this, ___size, method) (( void (*) (Dictionary_2_t982 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17440_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17441_gshared (Dictionary_2_t982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17441(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17441_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2304  Dictionary_2_make_pair_m17442_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17442(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2304  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17442_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17443_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17443(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17443_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17444_gshared (Dictionary_2_t982 * __this, KeyValuePair_2U5BU5D_t2477* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17444(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t982 *, KeyValuePair_2U5BU5D_t2477*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17444_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17445_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17445(__this, method) (( void (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_Resize_m17445_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17446_gshared (Dictionary_2_t982 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17446(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t982 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m17446_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17447_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17447(__this, method) (( void (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_Clear_m17447_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17448_gshared (Dictionary_2_t982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17448(__this, ___key, method) (( bool (*) (Dictionary_2_t982 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17448_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17449_gshared (Dictionary_2_t982 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17449(__this, ___value, method) (( bool (*) (Dictionary_2_t982 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17449_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17450_gshared (Dictionary_2_t982 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17450(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t982 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2_GetObjectData_m17450_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17451_gshared (Dictionary_2_t982 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17451(__this, ___sender, method) (( void (*) (Dictionary_2_t982 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17451_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17452_gshared (Dictionary_2_t982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17452(__this, ___key, method) (( bool (*) (Dictionary_2_t982 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17452_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17453_gshared (Dictionary_2_t982 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17453(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t982 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17453_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2306 * Dictionary_2_get_Values_m17454_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17454(__this, method) (( ValueCollection_t2306 * (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_get_Values_m17454_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17455_gshared (Dictionary_2_t982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17455(__this, ___key, method) (( int32_t (*) (Dictionary_2_t982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17455_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17456_gshared (Dictionary_2_t982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17456(__this, ___value, method) (( int32_t (*) (Dictionary_2_t982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17456_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17457_gshared (Dictionary_2_t982 * __this, KeyValuePair_2_t2304  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17457(__this, ___pair, method) (( bool (*) (Dictionary_2_t982 *, KeyValuePair_2_t2304 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17457_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2308  Dictionary_2_GetEnumerator_m17458_gshared (Dictionary_2_t982 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17458(__this, method) (( Enumerator_t2308  (*) (Dictionary_2_t982 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17458_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1048  Dictionary_2_U3CCopyToU3Em__0_m17459_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17459(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1048  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17459_gshared)(__this /* static, unused */, ___key, ___value, method)
