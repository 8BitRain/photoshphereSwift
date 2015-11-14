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

// System.Byte[]
struct ByteU5BU5D_t81;
// System.Security.Cryptography.RSA
struct RSA_t742;

#include "codegen/il2cpp-codegen.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m6842 (Object_t * __this /* static, unused */, ByteU5BU5D_t81* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m6843 (Object_t * __this /* static, unused */, ByteU5BU5D_t81* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t81* CryptoConvert_GetBytesLE_m6844 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t81* CryptoConvert_ToCapiPrivateKeyBlob_m6845 (Object_t * __this /* static, unused */, RSA_t742 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t742 * CryptoConvert_FromCapiPublicKeyBlob_m6846 (Object_t * __this /* static, unused */, ByteU5BU5D_t81* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t742 * CryptoConvert_FromCapiPublicKeyBlob_m6847 (Object_t * __this /* static, unused */, ByteU5BU5D_t81* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t81* CryptoConvert_ToCapiPublicKeyBlob_m6848 (Object_t * __this /* static, unused */, RSA_t742 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t81* CryptoConvert_ToCapiKeyBlob_m6849 (Object_t * __this /* static, unused */, RSA_t742 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
