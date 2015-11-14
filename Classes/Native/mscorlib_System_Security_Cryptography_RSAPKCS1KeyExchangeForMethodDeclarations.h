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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t891;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t840;
// System.Byte[]
struct ByteU5BU5D_t81;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m4797 (RSAPKCS1KeyExchangeFormatter_t891 * __this, AsymmetricAlgorithm_t840 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t81* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m9455 (RSAPKCS1KeyExchangeFormatter_t891 * __this, ByteU5BU5D_t81* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m9456 (RSAPKCS1KeyExchangeFormatter_t891 * __this, AsymmetricAlgorithm_t840 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
