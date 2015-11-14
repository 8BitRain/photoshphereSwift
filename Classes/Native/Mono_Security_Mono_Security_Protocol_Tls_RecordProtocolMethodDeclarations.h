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

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t784;
// System.IO.Stream
struct Stream_t802;
// Mono.Security.Protocol.Tls.Context
struct Context_t778;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t804;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t81;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t775;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t777;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
extern "C" void RecordProtocol__ctor_m4368 (RecordProtocol_t784 * __this, Stream_t802 * ___innerStream, Context_t778 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
extern "C" void RecordProtocol__cctor_m4369 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
extern "C" Context_t778 * RecordProtocol_get_Context_m4370 (RecordProtocol_t784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void RecordProtocol_SendRecord_m4371 (RecordProtocol_t784 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
extern "C" void RecordProtocol_ProcessChangeCipherSpec_m4372 (RecordProtocol_t784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t804 * RecordProtocol_GetMessage_m4373 (RecordProtocol_t784 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginReceiveRecord_m4374 (RecordProtocol_t784 * __this, Stream_t802 * ___record, AsyncCallback_t10 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalReceiveRecordCallback_m4375 (RecordProtocol_t784 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
extern "C" ByteU5BU5D_t81* RecordProtocol_EndReceiveRecord_m4376 (RecordProtocol_t784 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
extern "C" ByteU5BU5D_t81* RecordProtocol_ReceiveRecord_m4377 (RecordProtocol_t784 * __this, Stream_t802 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
extern "C" ByteU5BU5D_t81* RecordProtocol_ReadRecordBuffer_m4378 (RecordProtocol_t784 * __this, int32_t ___contentType, Stream_t802 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
extern "C" ByteU5BU5D_t81* RecordProtocol_ReadClientHelloV2_m4379 (RecordProtocol_t784 * __this, Stream_t802 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
extern "C" ByteU5BU5D_t81* RecordProtocol_ReadStandardRecordBuffer_m4380 (RecordProtocol_t784 * __this, Stream_t802 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_ProcessAlert_m4381 (RecordProtocol_t784 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m4382 (RecordProtocol_t784 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m4383 (RecordProtocol_t784 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
extern "C" void RecordProtocol_SendAlert_m4384 (RecordProtocol_t784 * __this, Alert_t775 * ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
extern "C" void RecordProtocol_SendChangeCipherSpec_m4385 (RecordProtocol_t784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m4386 (RecordProtocol_t784 * __this, uint8_t ___handshakeType, AsyncCallback_t10 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalSendRecordCallback_m4387 (RecordProtocol_t784 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m4388 (RecordProtocol_t784 * __this, uint8_t ___contentType, ByteU5BU5D_t81* ___recordData, AsyncCallback_t10 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
extern "C" void RecordProtocol_EndSendRecord_m4389 (RecordProtocol_t784 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" void RecordProtocol_SendRecord_m4390 (RecordProtocol_t784 * __this, uint8_t ___contentType, ByteU5BU5D_t81* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t81* RecordProtocol_EncodeRecord_m4391 (RecordProtocol_t784 * __this, uint8_t ___contentType, ByteU5BU5D_t81* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t81* RecordProtocol_EncodeRecord_m4392 (RecordProtocol_t784 * __this, uint8_t ___contentType, ByteU5BU5D_t81* ___recordData, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t81* RecordProtocol_encryptRecordFragment_m4393 (RecordProtocol_t784 * __this, uint8_t ___contentType, ByteU5BU5D_t81* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t81* RecordProtocol_decryptRecordFragment_m4394 (RecordProtocol_t784 * __this, uint8_t ___contentType, ByteU5BU5D_t81* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
extern "C" bool RecordProtocol_Compare_m4395 (RecordProtocol_t784 * __this, ByteU5BU5D_t81* ___array1, ByteU5BU5D_t81* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
extern "C" void RecordProtocol_ProcessCipherSpecV2Buffer_m4396 (RecordProtocol_t784 * __this, int32_t ___protocol, ByteU5BU5D_t81* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
extern "C" CipherSuite_t777 * RecordProtocol_MapV2CipherCode_m4397 (RecordProtocol_t784 * __this, String_t* ___prefix, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
