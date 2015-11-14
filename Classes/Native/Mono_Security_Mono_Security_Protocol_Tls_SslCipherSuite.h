#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t81;

#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"

// Mono.Security.Protocol.Tls.SslCipherSuite
struct  SslCipherSuite_t816  : public CipherSuite_t777
{
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::pad1
	ByteU5BU5D_t81* ___pad1_21;
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::pad2
	ByteU5BU5D_t81* ___pad2_22;
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::header
	ByteU5BU5D_t81* ___header_23;
};
