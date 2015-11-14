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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2395;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m18270_gshared (DefaultComparer_t2395 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18270(__this, method) (( void (*) (DefaultComparer_t2395 *, const MethodInfo*))DefaultComparer__ctor_m18270_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18271_gshared (DefaultComparer_t2395 * __this, DateTime_t289  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18271(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2395 *, DateTime_t289 , const MethodInfo*))DefaultComparer_GetHashCode_m18271_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18272_gshared (DefaultComparer_t2395 * __this, DateTime_t289  ___x, DateTime_t289  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18272(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2395 *, DateTime_t289 , DateTime_t289 , const MethodInfo*))DefaultComparer_Equals_m18272_gshared)(__this, ___x, ___y, method)
