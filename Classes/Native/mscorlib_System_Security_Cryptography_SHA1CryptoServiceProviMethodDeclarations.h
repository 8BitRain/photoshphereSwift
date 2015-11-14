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

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_t1544;
// System.Byte[]
struct ByteU5BU5D_t81;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::.ctor()
extern "C" void SHA1CryptoServiceProvider__ctor_m9501 (SHA1CryptoServiceProvider_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Finalize()
extern "C" void SHA1CryptoServiceProvider_Finalize_m9502 (SHA1CryptoServiceProvider_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Dispose(System.Boolean)
extern "C" void SHA1CryptoServiceProvider_Dispose_m9503 (SHA1CryptoServiceProvider_t1544 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1CryptoServiceProvider_HashCore_m9504 (SHA1CryptoServiceProvider_t1544 * __this, ByteU5BU5D_t81* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1CryptoServiceProvider::HashFinal()
extern "C" ByteU5BU5D_t81* SHA1CryptoServiceProvider_HashFinal_m9505 (SHA1CryptoServiceProvider_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Initialize()
extern "C" void SHA1CryptoServiceProvider_Initialize_m9506 (SHA1CryptoServiceProvider_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
