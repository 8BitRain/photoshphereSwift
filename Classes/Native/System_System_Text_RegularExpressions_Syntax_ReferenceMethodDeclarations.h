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

// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t1029;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1019;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1050;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern "C" void Reference__ctor_m5583 (Reference_t1029 * __this, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C" CapturingGroup_t1019 * Reference_get_CapturingGroup_m5584 (Reference_t1029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void Reference_set_CapturingGroup_m5585 (Reference_t1029 * __this, CapturingGroup_t1019 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C" bool Reference_get_IgnoreCase_m5586 (Reference_t1029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Reference_Compile_m5587 (Reference_t1029 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern "C" void Reference_GetWidth_m5588 (Reference_t1029 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C" bool Reference_IsComplex_m5589 (Reference_t1029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
