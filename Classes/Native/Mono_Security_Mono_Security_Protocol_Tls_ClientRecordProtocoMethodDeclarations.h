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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t783;
// System.IO.Stream
struct Stream_t802;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t781;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t804;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t792;
// System.Byte[]
struct ByteU5BU5D_t81;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m4257 (ClientRecordProtocol_t783 * __this, Stream_t802 * ___innerStream, ClientContext_t781 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t804 * ClientRecordProtocol_GetMessage_m4258 (ClientRecordProtocol_t783 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m4259 (ClientRecordProtocol_t783 * __this, TlsStream_t792 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t804 * ClientRecordProtocol_createClientHandshakeMessage_m4260 (ClientRecordProtocol_t783 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t804 * ClientRecordProtocol_createServerHandshakeMessage_m4261 (ClientRecordProtocol_t783 * __this, uint8_t ___type, ByteU5BU5D_t81* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
