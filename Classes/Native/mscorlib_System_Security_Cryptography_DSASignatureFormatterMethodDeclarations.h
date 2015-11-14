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

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t1526;
// System.Byte[]
struct ByteU5BU5D_t81;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t840;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C" void DSASignatureFormatter__ctor_m9322 (DSASignatureFormatter_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t81* DSASignatureFormatter_CreateSignature_m9323 (DSASignatureFormatter_t1526 * __this, ByteU5BU5D_t81* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureFormatter_SetHashAlgorithm_m9324 (DSASignatureFormatter_t1526 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureFormatter_SetKey_m9325 (DSASignatureFormatter_t1526 * __this, AsymmetricAlgorithm_t840 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
