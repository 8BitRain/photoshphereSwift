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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2060;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1994;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2448;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2449;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2065;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m14178_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14178(__this, method) (( void (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2__ctor_m14178_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14180_gshared (Dictionary_2_t2060 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14180(__this, ___comparer, method) (( void (*) (Dictionary_2_t2060 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14180_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14182_gshared (Dictionary_2_t2060 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14182(__this, ___capacity, method) (( void (*) (Dictionary_2_t2060 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14182_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14184_gshared (Dictionary_2_t2060 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14184(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2060 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2__ctor_m14184_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14186_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14186(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14186_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14188_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14188(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2060 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14188_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14190_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14190(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2060 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14190_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14192_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14192(__this, ___key, method) (( bool (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14192_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14194_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14194(__this, ___key, method) (( void (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14194_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14196_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14196(__this, method) (( bool (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14196_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14198_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14198(__this, method) (( Object_t * (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14198_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14200_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14200(__this, method) (( bool (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14200_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14202_gshared (Dictionary_2_t2060 * __this, KeyValuePair_2_t2062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14202(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2060 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14202_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14204_gshared (Dictionary_2_t2060 * __this, KeyValuePair_2_t2062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14204(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2060 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14204_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14206_gshared (Dictionary_2_t2060 * __this, KeyValuePair_2U5BU5D_t2448* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14206(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2060 *, KeyValuePair_2U5BU5D_t2448*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14206_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14208_gshared (Dictionary_2_t2060 * __this, KeyValuePair_2_t2062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14208(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2060 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14208_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14210_gshared (Dictionary_2_t2060 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14210(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2060 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14210_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14212_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14212(__this, method) (( Object_t * (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14212_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14214_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14214(__this, method) (( Object_t* (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14214_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14216_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14216(__this, method) (( Object_t * (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14216_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14218_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14218(__this, method) (( int32_t (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_get_Count_m14218_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14220_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14220(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14220_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14222_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14222(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2060 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14224_gshared (Dictionary_2_t2060 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14224(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2060 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14224_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14226_gshared (Dictionary_2_t2060 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14226(__this, ___size, method) (( void (*) (Dictionary_2_t2060 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14226_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14228_gshared (Dictionary_2_t2060 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14228(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2060 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14228_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2062  Dictionary_2_make_pair_m14230_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14230(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2062  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14230_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14232_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14232(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14232_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14234_gshared (Dictionary_2_t2060 * __this, KeyValuePair_2U5BU5D_t2448* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14234(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2060 *, KeyValuePair_2U5BU5D_t2448*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14234_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m14236_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14236(__this, method) (( void (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_Resize_m14236_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14238_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14238(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2060 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14238_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m14240_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14240(__this, method) (( void (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_Clear_m14240_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14242_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14242(__this, ___key, method) (( bool (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14242_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14244_gshared (Dictionary_2_t2060 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14244(__this, ___value, method) (( bool (*) (Dictionary_2_t2060 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14244_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14246_gshared (Dictionary_2_t2060 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14246(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2060 *, SerializationInfo_t418 *, StreamingContext_t419 , const MethodInfo*))Dictionary_2_GetObjectData_m14246_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14248_gshared (Dictionary_2_t2060 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14248(__this, ___sender, method) (( void (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14248_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14250_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14250(__this, ___key, method) (( bool (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14250_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14252_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14252(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2060 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14252_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2065 * Dictionary_2_get_Values_m14254_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14254(__this, method) (( ValueCollection_t2065 * (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_get_Values_m14254_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14256_gshared (Dictionary_2_t2060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14256(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14256_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14258_gshared (Dictionary_2_t2060 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14258(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2060 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14258_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14260_gshared (Dictionary_2_t2060 * __this, KeyValuePair_2_t2062  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14260(__this, ___pair, method) (( bool (*) (Dictionary_2_t2060 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14260_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2067  Dictionary_2_GetEnumerator_m14262_gshared (Dictionary_2_t2060 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14262(__this, method) (( Enumerator_t2067  (*) (Dictionary_2_t2060 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14262_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1048  Dictionary_2_U3CCopyToU3Em__0_m14264_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14264(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1048  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14264_gshared)(__this /* static, unused */, ___key, ___value, method)
