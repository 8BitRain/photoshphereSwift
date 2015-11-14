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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2012;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2011;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2441;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2442;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2016;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13553_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13553(__this, method) (( void (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2__ctor_m13553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13555_gshared (Dictionary_2_t2012 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13555(__this, ___comparer, method) (( void (*) (Dictionary_2_t2012 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13555_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13557_gshared (Dictionary_2_t2012 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13557(__this, ___capacity, method) (( void (*) (Dictionary_2_t2012 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13559_gshared (Dictionary_2_t2012 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13559(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2012 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2__ctor_m13559_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13561_gshared (Dictionary_2_t2012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13561(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2012 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13561_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13563_gshared (Dictionary_2_t2012 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13563(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2012 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13563_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13565_gshared (Dictionary_2_t2012 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13565(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2012 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13565_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13567_gshared (Dictionary_2_t2012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13567(__this, ___key, method) (( bool (*) (Dictionary_2_t2012 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13567_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13569_gshared (Dictionary_2_t2012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13569(__this, ___key, method) (( void (*) (Dictionary_2_t2012 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13569_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13571_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13571(__this, method) (( bool (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13571_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13573_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13573(__this, method) (( Object_t * (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13573_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13575_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13575(__this, method) (( bool (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13577_gshared (Dictionary_2_t2012 * __this, KeyValuePair_2_t2014  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13577(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2012 *, KeyValuePair_2_t2014 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13577_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13579_gshared (Dictionary_2_t2012 * __this, KeyValuePair_2_t2014  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13579(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2012 *, KeyValuePair_2_t2014 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13579_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13581_gshared (Dictionary_2_t2012 * __this, KeyValuePair_2U5BU5D_t2441* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13581(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2012 *, KeyValuePair_2U5BU5D_t2441*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13581_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13583_gshared (Dictionary_2_t2012 * __this, KeyValuePair_2_t2014  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13583(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2012 *, KeyValuePair_2_t2014 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13583_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13585_gshared (Dictionary_2_t2012 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13585(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2012 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13585_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13587_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13587(__this, method) (( Object_t * (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13587_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13589_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13589(__this, method) (( Object_t* (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13589_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13591_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13591(__this, method) (( Object_t * (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13591_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13593_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13593(__this, method) (( int32_t (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_get_Count_m13593_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13595_gshared (Dictionary_2_t2012 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13595(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2012 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13595_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13597_gshared (Dictionary_2_t2012 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13597(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2012 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13597_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13599_gshared (Dictionary_2_t2012 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13599(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2012 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13599_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13601_gshared (Dictionary_2_t2012 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13601(__this, ___size, method) (( void (*) (Dictionary_2_t2012 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13601_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13603_gshared (Dictionary_2_t2012 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13603(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2012 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13603_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2014  Dictionary_2_make_pair_m13605_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13605(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2014  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13605_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13607_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13607(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13607_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13609_gshared (Dictionary_2_t2012 * __this, KeyValuePair_2U5BU5D_t2441* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13609(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2012 *, KeyValuePair_2U5BU5D_t2441*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13609_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13611_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13611(__this, method) (( void (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_Resize_m13611_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13613_gshared (Dictionary_2_t2012 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13613(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2012 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13613_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13615_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13615(__this, method) (( void (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_Clear_m13615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13617_gshared (Dictionary_2_t2012 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13617(__this, ___key, method) (( bool (*) (Dictionary_2_t2012 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13617_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13619_gshared (Dictionary_2_t2012 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13619(__this, ___value, method) (( bool (*) (Dictionary_2_t2012 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13619_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13621_gshared (Dictionary_2_t2012 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13621(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2012 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2_GetObjectData_m13621_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13623_gshared (Dictionary_2_t2012 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13623(__this, ___sender, method) (( void (*) (Dictionary_2_t2012 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13623_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13625_gshared (Dictionary_2_t2012 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13625(__this, ___key, method) (( bool (*) (Dictionary_2_t2012 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13625_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13627_gshared (Dictionary_2_t2012 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13627(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2012 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13627_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2016 * Dictionary_2_get_Values_m13629_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13629(__this, method) (( ValueCollection_t2016 * (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_get_Values_m13629_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13631_gshared (Dictionary_2_t2012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13631(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2012 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13631_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13633_gshared (Dictionary_2_t2012 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13633(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2012 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13633_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13635_gshared (Dictionary_2_t2012 * __this, KeyValuePair_2_t2014  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13635(__this, ___pair, method) (( bool (*) (Dictionary_2_t2012 *, KeyValuePair_2_t2014 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13635_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2018  Dictionary_2_GetEnumerator_m13637_gshared (Dictionary_2_t2012 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13637(__this, method) (( Enumerator_t2018  (*) (Dictionary_2_t2012 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13637_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1048  Dictionary_2_U3CCopyToU3Em__0_m13639_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13639(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1048  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13639_gshared)(__this /* static, unused */, ___key, ___value, method)
