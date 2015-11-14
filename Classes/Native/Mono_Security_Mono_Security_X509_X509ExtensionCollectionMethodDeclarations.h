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

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t750;
// Mono.Security.ASN1
struct ASN1_t721;
// System.Collections.IEnumerator
struct IEnumerator_t73;
// System.String
struct String_t;
// Mono.Security.X509.X509Extension
struct X509Extension_t757;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" void X509ExtensionCollection__ctor_m4117 (X509ExtensionCollection_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" void X509ExtensionCollection__ctor_m4118 (X509ExtensionCollection_t750 * __this, ASN1_t721 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m4119 (X509ExtensionCollection_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" int32_t X509ExtensionCollection_IndexOf_m4120 (X509ExtensionCollection_t750 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t757 * X509ExtensionCollection_get_Item_m4121 (X509ExtensionCollection_t750 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
