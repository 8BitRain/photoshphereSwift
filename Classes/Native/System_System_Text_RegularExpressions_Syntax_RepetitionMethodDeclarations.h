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

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t1022;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1015;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1050;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1033;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C" void Repetition__ctor_m5542 (Repetition_t1022 * __this, int32_t ___min, int32_t ___max, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" Expression_t1015 * Repetition_get_Expression_m5543 (Repetition_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Repetition_set_Expression_m5544 (Repetition_t1022 * __this, Expression_t1015 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" int32_t Repetition_get_Minimum_m5545 (Repetition_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Repetition_Compile_m5546 (Repetition_t1022 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C" void Repetition_GetWidth_m5547 (Repetition_t1022 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t1033 * Repetition_GetAnchorInfo_m5548 (Repetition_t1022 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
