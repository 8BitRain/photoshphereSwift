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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2036;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2032;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1868;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Object[]
struct ObjectU5BU5D_t127;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13938_gshared (ValueCollection_t2036 * __this, Dictionary_2_t2032 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m13938(__this, ___dictionary, method) (( void (*) (ValueCollection_t2036 *, Dictionary_2_t2032 *, const MethodInfo*))ValueCollection__ctor_m13938_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13939_gshared (ValueCollection_t2036 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13939(__this, ___item, method) (( void (*) (ValueCollection_t2036 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13939_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13940_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13940(__this, method) (( void (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13940_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13941_gshared (ValueCollection_t2036 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13941(__this, ___item, method) (( bool (*) (ValueCollection_t2036 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13941_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13942_gshared (ValueCollection_t2036 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13942(__this, ___item, method) (( bool (*) (ValueCollection_t2036 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13942_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13943_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13943(__this, method) (( Object_t* (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13944_gshared (ValueCollection_t2036 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m13944(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2036 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13944_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13945_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13945(__this, method) (( Object_t * (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13945_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13946_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13946(__this, method) (( bool (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13946_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13947_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13947(__this, method) (( bool (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13947_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13948_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13948(__this, method) (( Object_t * (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13948_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13949_gshared (ValueCollection_t2036 * __this, ObjectU5BU5D_t127* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m13949(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2036 *, ObjectU5BU5D_t127*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m13949_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2037  ValueCollection_GetEnumerator_m13950_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m13950(__this, method) (( Enumerator_t2037  (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_GetEnumerator_m13950_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13951_gshared (ValueCollection_t2036 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m13951(__this, method) (( int32_t (*) (ValueCollection_t2036 *, const MethodInfo*))ValueCollection_get_Count_m13951_gshared)(__this, method)
