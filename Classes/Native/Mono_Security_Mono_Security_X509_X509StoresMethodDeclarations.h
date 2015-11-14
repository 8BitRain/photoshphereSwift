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

// Mono.Security.X509.X509Stores
struct X509Stores_t760;
// System.String
struct String_t;
// Mono.Security.X509.X509Store
struct X509Store_t758;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" void X509Stores__ctor_m4134 (X509Stores_t760 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" X509Store_t758 * X509Stores_get_TrustedRoot_m4135 (X509Stores_t760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern "C" X509Store_t758 * X509Stores_Open_m4136 (X509Stores_t760 * __this, String_t* ___storeName, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
