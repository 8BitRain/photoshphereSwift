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

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct PositionAssertion_t1028;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1050;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1033;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern "C" void PositionAssertion__ctor_m5578 (PositionAssertion_t1028 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void PositionAssertion_Compile_m5579 (PositionAssertion_t1028 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void PositionAssertion_GetWidth_m5580 (PositionAssertion_t1028 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C" bool PositionAssertion_IsComplex_m5581 (PositionAssertion_t1028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t1033 * PositionAssertion_GetAnchorInfo_m5582 (PositionAssertion_t1028 * __this, bool ___revers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
