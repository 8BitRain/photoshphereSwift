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

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t782;
// System.IO.Stream
struct Stream_t802;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t822;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t821;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t814;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t798;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t799;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t815;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t812;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t746;
// System.Int32[]
struct Int32U5BU5D_t68;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t840;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C" void SslClientStream__ctor_m4416 (SslClientStream_t782 * __this, Stream_t802 * ___stream, String_t* ___targetHost, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void SslClientStream__ctor_m4417 (SslClientStream_t782 * __this, Stream_t802 * ___stream, String_t* ___targetHost, X509Certificate_t822 * ___clientCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m4418 (SslClientStream_t782 * __this, Stream_t802 * ___stream, String_t* ___targetHost, X509CertificateCollection_t821 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslClientStream__ctor_m4419 (SslClientStream_t782 * __this, Stream_t802 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m4420 (SslClientStream_t782 * __this, Stream_t802 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t821 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_add_ServerCertValidation_m4421 (SslClientStream_t782 * __this, CertificateValidationCallback_t814 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_remove_ServerCertValidation_m4422 (SslClientStream_t782 * __this, CertificateValidationCallback_t814 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_add_ClientCertSelection_m4423 (SslClientStream_t782 * __this, CertificateSelectionCallback_t798 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_remove_ClientCertSelection_m4424 (SslClientStream_t782 * __this, CertificateSelectionCallback_t798 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_add_PrivateKeySelection_m4425 (SslClientStream_t782 * __this, PrivateKeySelectionCallback_t799 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_remove_PrivateKeySelection_m4426 (SslClientStream_t782 * __this, PrivateKeySelectionCallback_t799 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_add_ServerCertValidation2_m4427 (SslClientStream_t782 * __this, CertificateValidationCallback2_t815 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_remove_ServerCertValidation2_m4428 (SslClientStream_t782 * __this, CertificateValidationCallback2_t815 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C" Stream_t802 * SslClientStream_get_InputBuffer_m4429 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C" X509CertificateCollection_t821 * SslClientStream_get_ClientCertificates_m4430 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C" X509Certificate_t822 * SslClientStream_get_SelectedClientCertificate_m4431 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C" CertificateValidationCallback_t814 * SslClientStream_get_ServerCertValidationDelegate_m4432 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_set_ServerCertValidationDelegate_m4433 (SslClientStream_t782 * __this, CertificateValidationCallback_t814 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C" CertificateSelectionCallback_t798 * SslClientStream_get_ClientCertSelectionDelegate_m4434 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_set_ClientCertSelectionDelegate_m4435 (SslClientStream_t782 * __this, CertificateSelectionCallback_t798 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t799 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m4436 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_set_PrivateKeyCertSelectionDelegate_m4437 (SslClientStream_t782 * __this, PrivateKeySelectionCallback_t799 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C" void SslClientStream_Finalize_m4438 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C" void SslClientStream_Dispose_m4439 (SslClientStream_t782 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C" Object_t * SslClientStream_OnBeginNegotiateHandshake_m4440 (SslClientStream_t782 * __this, AsyncCallback_t10 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern "C" void SslClientStream_SafeReceiveRecord_m4441 (SslClientStream_t782 * __this, Stream_t802 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C" void SslClientStream_OnNegotiateHandshakeCallback_m4442 (SslClientStream_t782 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t822 * SslClientStream_OnLocalCertificateSelection_m4443 (SslClientStream_t782 * __this, X509CertificateCollection_t821 * ___clientCertificates, X509Certificate_t822 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t821 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslClientStream_get_HaveRemoteValidation2Callback_m4444 (SslClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t812 * SslClientStream_OnRemoteCertificateValidation2_m4445 (SslClientStream_t782 * __this, X509CertificateCollection_t746 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_OnRemoteCertificateValidation_m4446 (SslClientStream_t782 * __this, X509Certificate_t822 * ___certificate, Int32U5BU5D_t68* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_RaiseServerCertificateValidation_m4447 (SslClientStream_t782 * __this, X509Certificate_t822 * ___certificate, Int32U5BU5D_t68* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t812 * SslClientStream_RaiseServerCertificateValidation2_m4448 (SslClientStream_t782 * __this, X509CertificateCollection_t746 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t822 * SslClientStream_RaiseClientCertificateSelection_m4449 (SslClientStream_t782 * __this, X509CertificateCollection_t821 * ___clientCertificates, X509Certificate_t822 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t821 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t840 * SslClientStream_OnLocalPrivateKeySelection_m4450 (SslClientStream_t782 * __this, X509Certificate_t822 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t840 * SslClientStream_RaisePrivateKeySelection_m4451 (SslClientStream_t782 * __this, X509Certificate_t822 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
