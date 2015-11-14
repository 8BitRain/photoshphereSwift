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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1797;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1802;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object[]
struct ObjectU5BU5D_t127;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1868;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m11055_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t* ___list, const MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m11055(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t1797 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m11055_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11056_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11056(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11056_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11057_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11057(__this, method) (( void (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11057_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11058_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11058(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t1797 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11058_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11059_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11059(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11059_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11060_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11060(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1797 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11060_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11061_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11061(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1797 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11061_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11062_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11062(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1797 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11062_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11063_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11063(__this, method) (( bool (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11063_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11064_gshared (ReadOnlyCollection_1_t1797 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11064(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1797 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11064_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11065_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11065(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11065_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m11066_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m11066(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11066_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m11067_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m11067(__this, method) (( void (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11067_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m11068_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m11068(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11068_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11069_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11069(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11069_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m11070_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m11070(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1797 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m11070_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m11071_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m11071(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m11071_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11072_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11072(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1797 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11072_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11073_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11073(__this, method) (( bool (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11073_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11074_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11074(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11074_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11075_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11075(__this, method) (( bool (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11075_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11076_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11076(__this, method) (( bool (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11076_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m11077_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m11077(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1797 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m11077_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m11078_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m11078(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1797 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m11078_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m11079_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m11079(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_Contains_m11079_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m11080_gshared (ReadOnlyCollection_1_t1797 * __this, ObjectU5BU5D_t127* ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m11080(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1797 *, ObjectU5BU5D_t127*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m11080_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m11081_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m11081(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m11081_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m11082_gshared (ReadOnlyCollection_1_t1797 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m11082(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1797 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m11082_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m11083_gshared (ReadOnlyCollection_1_t1797 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m11083(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t1797 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m11083_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m11084_gshared (ReadOnlyCollection_1_t1797 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m11084(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1797 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m11084_gshared)(__this, ___index, method)
