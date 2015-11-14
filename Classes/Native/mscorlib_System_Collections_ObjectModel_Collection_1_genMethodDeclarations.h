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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1803;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t127;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1868;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1802;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11085_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11085(__this, method) (( void (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1__ctor_m11085_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11086_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11086(__this, method) (( bool (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11086_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11087_gshared (Collection_1_t1803 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11087(__this, ___array, ___index, method) (( void (*) (Collection_1_t1803 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11087_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11088_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11088(__this, method) (( Object_t * (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11088_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11089_gshared (Collection_1_t1803 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11089(__this, ___value, method) (( int32_t (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11089_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11090_gshared (Collection_1_t1803 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11090(__this, ___value, method) (( bool (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11090_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11091_gshared (Collection_1_t1803 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11091(__this, ___value, method) (( int32_t (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11091_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11092_gshared (Collection_1_t1803 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11092(__this, ___index, ___value, method) (( void (*) (Collection_1_t1803 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11092_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11093_gshared (Collection_1_t1803 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11093(__this, ___value, method) (( void (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11093_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11094_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11094(__this, method) (( bool (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11094_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11095_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11095(__this, method) (( Object_t * (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11095_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11096_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11096(__this, method) (( bool (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11096_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11097_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11097(__this, method) (( bool (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11097_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11098_gshared (Collection_1_t1803 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11098(__this, ___index, method) (( Object_t * (*) (Collection_1_t1803 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11098_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11099_gshared (Collection_1_t1803 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11099(__this, ___index, ___value, method) (( void (*) (Collection_1_t1803 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11099_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11100_gshared (Collection_1_t1803 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11100(__this, ___item, method) (( void (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_Add_m11100_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11101_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11101(__this, method) (( void (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_Clear_m11101_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11102_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11102(__this, method) (( void (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_ClearItems_m11102_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11103_gshared (Collection_1_t1803 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11103(__this, ___item, method) (( bool (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11103_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11104_gshared (Collection_1_t1803 * __this, ObjectU5BU5D_t127* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11104(__this, ___array, ___index, method) (( void (*) (Collection_1_t1803 *, ObjectU5BU5D_t127*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11104_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11105_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11105(__this, method) (( Object_t* (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_GetEnumerator_m11105_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11106_gshared (Collection_1_t1803 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11106(__this, ___item, method) (( int32_t (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11106_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11107_gshared (Collection_1_t1803 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11107(__this, ___index, ___item, method) (( void (*) (Collection_1_t1803 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11107_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11108_gshared (Collection_1_t1803 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11108(__this, ___index, ___item, method) (( void (*) (Collection_1_t1803 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11108_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11109_gshared (Collection_1_t1803 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11109(__this, ___item, method) (( bool (*) (Collection_1_t1803 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11109_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11110_gshared (Collection_1_t1803 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11110(__this, ___index, method) (( void (*) (Collection_1_t1803 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11110_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11111_gshared (Collection_1_t1803 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11111(__this, ___index, method) (( void (*) (Collection_1_t1803 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11111_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11112_gshared (Collection_1_t1803 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11112(__this, method) (( int32_t (*) (Collection_1_t1803 *, const MethodInfo*))Collection_1_get_Count_m11112_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11113_gshared (Collection_1_t1803 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11113(__this, ___index, method) (( Object_t * (*) (Collection_1_t1803 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11113_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11114_gshared (Collection_1_t1803 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11114(__this, ___index, ___value, method) (( void (*) (Collection_1_t1803 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11114_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11115_gshared (Collection_1_t1803 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11115(__this, ___index, ___item, method) (( void (*) (Collection_1_t1803 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11115_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11116_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11116(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11116_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11117_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11117(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11117_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11118_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11118(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11118_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11119_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11119(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11119_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11120_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11120(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11120_gshared)(__this /* static, unused */, ___list, method)
