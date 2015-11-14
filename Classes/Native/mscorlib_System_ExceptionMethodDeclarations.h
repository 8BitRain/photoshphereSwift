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

// System.Exception
struct Exception_t124;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;
// System.Text.StringBuilder
struct StringBuilder_t448;
// System.Reflection.MethodBase
struct MethodBase_t451;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
extern "C" void Exception__ctor_m4676 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C" void Exception__ctor_m2112 (Exception_t124 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception__ctor_m2178 (Exception_t124 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" void Exception__ctor_m2177 (Exception_t124 * __this, String_t* ___message, Exception_t124 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C" Exception_t124 * Exception_get_InnerException_m6594 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" void Exception_set_HResult_m2176 (Exception_t124 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C" String_t* Exception_get_ClassName_m6595 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C" String_t* Exception_get_Message_m6596 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C" String_t* Exception_get_Source_m6597 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C" String_t* Exception_get_StackTrace_m6598 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception_GetObjectData_m5775 (Exception_t124 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C" String_t* Exception_ToString_m6599 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C" void Exception_GetFullNameForStackTrace_m6600 (Exception_t124 * __this, StringBuilder_t448 * ___sb, MethodBase_t451 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C" Type_t * Exception_GetType_m6601 (Exception_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
