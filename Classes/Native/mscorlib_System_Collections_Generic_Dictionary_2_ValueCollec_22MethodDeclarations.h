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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2306;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t982;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2415;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t68;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m17472_gshared (ValueCollection_t2306 * __this, Dictionary_2_t982 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m17472(__this, ___dictionary, method) (( void (*) (ValueCollection_t2306 *, Dictionary_2_t982 *, const MethodInfo*))ValueCollection__ctor_m17472_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17473_gshared (ValueCollection_t2306 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17473(__this, ___item, method) (( void (*) (ValueCollection_t2306 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17474_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17474(__this, method) (( void (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17474_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17475_gshared (ValueCollection_t2306 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17475(__this, ___item, method) (( bool (*) (ValueCollection_t2306 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17475_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17476_gshared (ValueCollection_t2306 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17476(__this, ___item, method) (( bool (*) (ValueCollection_t2306 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17476_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17477_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17477(__this, method) (( Object_t* (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17477_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m17478_gshared (ValueCollection_t2306 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m17478(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2306 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17478_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17479_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17479(__this, method) (( Object_t * (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17480_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17480(__this, method) (( bool (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17480_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17481_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17481(__this, method) (( bool (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17481_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m17482_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m17482(__this, method) (( Object_t * (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m17483_gshared (ValueCollection_t2306 * __this, Int32U5BU5D_t68* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m17483(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2306 *, Int32U5BU5D_t68*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17483_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2307  ValueCollection_GetEnumerator_m17484_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m17484(__this, method) (( Enumerator_t2307  (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_GetEnumerator_m17484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m17485_gshared (ValueCollection_t2306 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m17485(__this, method) (( int32_t (*) (ValueCollection_t2306 *, const MethodInfo*))ValueCollection_get_Count_m17485_gshared)(__this, method)
