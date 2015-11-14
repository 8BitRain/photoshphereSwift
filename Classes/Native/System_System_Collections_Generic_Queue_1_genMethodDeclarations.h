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

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t67;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2415;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.Int32[]
struct Int32U5BU5D_t68;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m630_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1__ctor_m630(__this, method) (( void (*) (Queue_1_t67 *, const MethodInfo*))Queue_1__ctor_m630_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m11814_gshared (Queue_1_t67 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m11814(__this, ___array, ___idx, method) (( void (*) (Queue_1_t67 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m11814_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m11815_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m11815(__this, method) (( bool (*) (Queue_1_t67 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m11815_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m11816_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m11816(__this, method) (( Object_t * (*) (Queue_1_t67 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m11816_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11817_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11817(__this, method) (( Object_t* (*) (Queue_1_t67 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11817_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m11818_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m11818(__this, method) (( Object_t * (*) (Queue_1_t67 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m11818_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m640_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1_Clear_m640(__this, method) (( void (*) (Queue_1_t67 *, const MethodInfo*))Queue_1_Clear_m640_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m639_gshared (Queue_1_t67 * __this, Int32U5BU5D_t68* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m639(__this, ___array, ___idx, method) (( void (*) (Queue_1_t67 *, Int32U5BU5D_t68*, int32_t, const MethodInfo*))Queue_1_CopyTo_m639_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m642_gshared (Queue_1_t67 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m642(__this, ___item, method) (( void (*) (Queue_1_t67 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m642_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m11819_gshared (Queue_1_t67 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m11819(__this, ___new_size, method) (( void (*) (Queue_1_t67 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m11819_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m11820_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m11820(__this, method) (( int32_t (*) (Queue_1_t67 *, const MethodInfo*))Queue_1_get_Count_m11820_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1871  Queue_1_GetEnumerator_m11821_gshared (Queue_1_t67 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m11821(__this, method) (( Enumerator_t1871  (*) (Queue_1_t67 *, const MethodInfo*))Queue_1_GetEnumerator_m11821_gshared)(__this, method)
