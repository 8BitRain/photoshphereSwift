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

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t798;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t822;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t821;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t9;
// System.AsyncCallback
struct AsyncCallback_t10;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m4668 (CertificateSelectionCallback_t798 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t822 * CertificateSelectionCallback_Invoke_m4669 (CertificateSelectionCallback_t798 * __this, X509CertificateCollection_t821 * ___clientCertificates, X509Certificate_t822 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t821 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t822 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t798(Il2CppObject* delegate, X509CertificateCollection_t821 * ___clientCertificates, X509Certificate_t822 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t821 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m4670 (CertificateSelectionCallback_t798 * __this, X509CertificateCollection_t821 * ___clientCertificates, X509Certificate_t822 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t821 * ___serverRequestedCertificates, AsyncCallback_t10 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t822 * CertificateSelectionCallback_EndInvoke_m4671 (CertificateSelectionCallback_t798 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
