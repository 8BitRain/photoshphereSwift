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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m11622(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1855 *, UnityAction_1_t1856 *, UnityAction_1_t1856 *, const MethodInfo*))ObjectPool_1__ctor_m11479_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countAll()
#define ObjectPool_1_get_countAll_m11623(__this, method) (( int32_t (*) (ObjectPool_1_t1855 *, const MethodInfo*))ObjectPool_1_get_countAll_m11481_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11624(__this, ___value, method) (( void (*) (ObjectPool_1_t1855 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11483_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Get()
#define ObjectPool_1_Get_m11625(__this, method) (( List_1_t672 * (*) (ObjectPool_1_t1855 *, const MethodInfo*))ObjectPool_1_Get_m11485_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Release(T)
#define ObjectPool_1_Release_m11626(__this, ___element, method) (( void (*) (ObjectPool_1_t1855 *, List_1_t672 *, const MethodInfo*))ObjectPool_1_Release_m11487_gshared)(__this, ___element, method)
