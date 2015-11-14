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

// System.Globalization.CultureInfo
struct CultureInfo_t444;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t1121;
// System.Object
struct Object_t;
// System.Globalization.CompareInfo
struct CompareInfo_t880;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1208;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1209;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C" void CultureInfo__ctor_m7545 (CultureInfo_t444 * __this, int32_t ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C" void CultureInfo__ctor_m7546 (CultureInfo_t444 * __this, int32_t ___culture, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m7547 (CultureInfo_t444 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m7548 (CultureInfo_t444 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C" void CultureInfo__ctor_m7549 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C" void CultureInfo__cctor_m7550 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" CultureInfo_t444 * CultureInfo_get_InvariantCulture_m4689 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" CultureInfo_t444 * CultureInfo_get_CurrentCulture_m4756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C" CultureInfo_t444 * CultureInfo_get_CurrentUICulture_m4758 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C" CultureInfo_t444 * CultureInfo_ConstructCurrentCulture_m7551 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C" CultureInfo_t444 * CultureInfo_ConstructCurrentUICulture_m7552 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C" int32_t CultureInfo_get_LCID_m7553 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C" String_t* CultureInfo_get_Name_m7554 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C" CultureInfo_t444 * CultureInfo_get_Parent_m7555 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C" TextInfo_t1121 * CultureInfo_get_TextInfo_m7556 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C" String_t* CultureInfo_get_IcuName_m7557 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::Clone()
extern "C" Object_t * CultureInfo_Clone_m7558 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C" bool CultureInfo_Equals_m7559 (CultureInfo_t444 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C" int32_t CultureInfo_GetHashCode_m7560 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C" String_t* CultureInfo_ToString_m7561 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C" CompareInfo_t880 * CultureInfo_get_CompareInfo_m7562 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C" bool CultureInfo_get_IsNeutralCulture_m7563 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C" void CultureInfo_CheckNeutral_m7564 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C" NumberFormatInfo_t1208 * CultureInfo_get_NumberFormat_m7565 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_NumberFormat(System.Globalization.NumberFormatInfo)
extern "C" void CultureInfo_set_NumberFormat_m7566 (CultureInfo_t444 * __this, NumberFormatInfo_t1208 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C" DateTimeFormatInfo_t1209 * CultureInfo_get_DateTimeFormat_m7567 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_DateTimeFormat(System.Globalization.DateTimeFormatInfo)
extern "C" void CultureInfo_set_DateTimeFormat_m7568 (CultureInfo_t444 * __this, DateTimeFormatInfo_t1209 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C" bool CultureInfo_get_IsReadOnly_m7569 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C" Object_t * CultureInfo_GetFormat_m7570 (CultureInfo_t444 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C" void CultureInfo_Construct_m7571 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C" bool CultureInfo_ConstructInternalLocaleFromName_m7572 (CultureInfo_t444 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C" bool CultureInfo_ConstructInternalLocaleFromLcid_m7573 (CultureInfo_t444 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m7574 (Object_t * __this /* static, unused */, CultureInfo_t444 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C" bool CultureInfo_construct_internal_locale_from_lcid_m7575 (CultureInfo_t444 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C" bool CultureInfo_construct_internal_locale_from_name_m7576 (CultureInfo_t444 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_construct_internal_locale_from_current_locale_m7577 (Object_t * __this /* static, unused */, CultureInfo_t444 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C" void CultureInfo_construct_datetime_format_m7578 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C" void CultureInfo_construct_number_format_m7579 (CultureInfo_t444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C" void CultureInfo_ConstructInvariant_m7580 (CultureInfo_t444 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C" TextInfo_t1121 * CultureInfo_CreateTextInfo_m7581 (CultureInfo_t444 * __this, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C" CultureInfo_t444 * CultureInfo_CreateCulture_m7582 (Object_t * __this /* static, unused */, String_t* ___name, bool ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
