﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1728;
// System.String
struct String_t;
// System.Exception
struct Exception_t124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Object System.Double::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Double_System_IConvertible_ToType_m6171 (double* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Double_System_IConvertible_ToBoolean_m6172 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Double::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Double_System_IConvertible_ToByte_m6173 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Double::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Double_System_IConvertible_ToChar_m6174 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Double::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t289  Double_System_IConvertible_ToDateTime_m6175 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Double::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1070  Double_System_IConvertible_ToDecimal_m6176 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Double_System_IConvertible_ToDouble_m6177 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Double::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Double_System_IConvertible_ToInt16_m6178 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Double_System_IConvertible_ToInt32_m6179 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Double::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Double_System_IConvertible_ToInt64_m6180 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Double::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Double_System_IConvertible_ToSByte_m6181 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Double::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Double_System_IConvertible_ToSingle_m6182 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Double::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Double_System_IConvertible_ToUInt16_m6183 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Double::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Double_System_IConvertible_ToUInt32_m6184 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Double::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Double_System_IConvertible_ToUInt64_m6185 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Object)
extern "C" int32_t Double_CompareTo_m6186 (double* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Object)
extern "C" bool Double_Equals_m6187 (double* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Double)
extern "C" int32_t Double_CompareTo_m6188 (double* __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Double)
extern "C" bool Double_Equals_m6189 (double* __this, double ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::GetHashCode()
extern "C" int32_t Double_GetHashCode_m6190 (double* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsInfinity(System.Double)
extern "C" bool Double_IsInfinity_m6191 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNaN(System.Double)
extern "C" bool Double_IsNaN_m6192 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
extern "C" bool Double_IsNegativeInfinity_m6193 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
extern "C" bool Double_IsPositiveInfinity_m6194 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String)
extern "C" double Double_Parse_m6195 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
extern "C" double Double_Parse_m6196 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" double Double_Parse_m6197 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Double&,System.Exception&)
extern "C" bool Double_Parse_m6198 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, double* ___result, Exception_t124 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C" bool Double_TryParseStringConstant_m6199 (Object_t * __this /* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::ParseImpl(System.Byte*,System.Double&)
extern "C" bool Double_ParseImpl_m6200 (Object_t * __this /* static, unused */, uint8_t* ___byte_ptr, double* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString()
extern "C" String_t* Double_ToString_m6201 (double* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.IFormatProvider)
extern "C" String_t* Double_ToString_m6202 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Double_ToString_m6203 (double* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
