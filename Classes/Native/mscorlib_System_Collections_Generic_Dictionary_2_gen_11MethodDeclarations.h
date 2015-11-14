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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2032;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1994;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2445;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2446;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2036;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13841_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13841(__this, method) (( void (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2__ctor_m13841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13842_gshared (Dictionary_2_t2032 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13842(__this, ___comparer, method) (( void (*) (Dictionary_2_t2032 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13842_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13844_gshared (Dictionary_2_t2032 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13844(__this, ___capacity, method) (( void (*) (Dictionary_2_t2032 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13844_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13846_gshared (Dictionary_2_t2032 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13846(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2032 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2__ctor_m13846_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13848_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13848(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13848_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13850_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13850(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13850_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13852_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13852(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13852_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13854_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13854(__this, ___key, method) (( bool (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13856_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13856(__this, ___key, method) (( void (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13856_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13858_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13858(__this, method) (( bool (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13860_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13860(__this, method) (( Object_t * (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13862_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13862(__this, method) (( bool (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13862_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13864_gshared (Dictionary_2_t2032 * __this, KeyValuePair_2_t2034  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13864(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2032 *, KeyValuePair_2_t2034 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13864_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13866_gshared (Dictionary_2_t2032 * __this, KeyValuePair_2_t2034  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13866(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2032 *, KeyValuePair_2_t2034 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13866_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13868_gshared (Dictionary_2_t2032 * __this, KeyValuePair_2U5BU5D_t2445* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13868(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2032 *, KeyValuePair_2U5BU5D_t2445*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13868_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13870_gshared (Dictionary_2_t2032 * __this, KeyValuePair_2_t2034  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13870(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2032 *, KeyValuePair_2_t2034 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13870_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13872_gshared (Dictionary_2_t2032 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13872(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2032 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13872_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13874_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13874(__this, method) (( Object_t * (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13874_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13876_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13876(__this, method) (( Object_t* (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13876_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13878_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13878(__this, method) (( Object_t * (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13880_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13880(__this, method) (( int32_t (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_get_Count_m13880_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13882_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13882(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13882_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13884_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13884(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13884_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13886_gshared (Dictionary_2_t2032 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13886(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2032 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13886_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13888_gshared (Dictionary_2_t2032 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13888(__this, ___size, method) (( void (*) (Dictionary_2_t2032 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13888_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13890_gshared (Dictionary_2_t2032 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13890(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2032 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13890_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2034  Dictionary_2_make_pair_m13892_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13892(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2034  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13892_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13894_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13894(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13894_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13896_gshared (Dictionary_2_t2032 * __this, KeyValuePair_2U5BU5D_t2445* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13896(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2032 *, KeyValuePair_2U5BU5D_t2445*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13896_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13898_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13898(__this, method) (( void (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_Resize_m13898_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13900_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13900(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m13900_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13902_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13902(__this, method) (( void (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_Clear_m13902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13904_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13904(__this, ___key, method) (( bool (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13904_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13906_gshared (Dictionary_2_t2032 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13906(__this, ___value, method) (( bool (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13906_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13908_gshared (Dictionary_2_t2032 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13908(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2032 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2_GetObjectData_m13908_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13910_gshared (Dictionary_2_t2032 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13910(__this, ___sender, method) (( void (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13910_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13912_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13912(__this, ___key, method) (( bool (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13912_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13914_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13914(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2032 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13914_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2036 * Dictionary_2_get_Values_m13915_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13915(__this, method) (( ValueCollection_t2036 * (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_get_Values_m13915_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13917_gshared (Dictionary_2_t2032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13917(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13917_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13919_gshared (Dictionary_2_t2032 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13919(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2032 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13919_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13921_gshared (Dictionary_2_t2032 * __this, KeyValuePair_2_t2034  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13921(__this, ___pair, method) (( bool (*) (Dictionary_2_t2032 *, KeyValuePair_2_t2034 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13921_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2038  Dictionary_2_GetEnumerator_m13923_gshared (Dictionary_2_t2032 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13923(__this, method) (( Enumerator_t2038  (*) (Dictionary_2_t2032 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13923_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1048  Dictionary_2_U3CCopyToU3Em__0_m13925_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13925(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1048  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13925_gshared)(__this /* static, unused */, ___key, ___value, method)
