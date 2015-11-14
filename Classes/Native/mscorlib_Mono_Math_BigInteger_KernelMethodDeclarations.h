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

// Mono.Math.BigInteger
struct BigInteger_t1132;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1732;
// System.UInt32[]
struct UInt32U5BU5D_t697;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1132 * Kernel_AddSameSign_m6777 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi1, BigInteger_t1132 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1132 * Kernel_Subtract_m6778 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___big, BigInteger_t1132 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m6779 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___big, BigInteger_t1132 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m6780 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi1, BigInteger_t1132 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m6781 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi1, BigInteger_t1132 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m6782 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m6783 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1732* Kernel_DwordDivMod_m6784 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1732* Kernel_multiByteDivide_m6785 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi1, BigInteger_t1132 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1132 * Kernel_LeftShift_m6786 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1132 * Kernel_RightShift_m6787 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1132 * Kernel_MultiplyByDword_m6788 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m6789 (Object_t * __this /* static, unused */, UInt32U5BU5D_t697* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t697* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t697* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m6790 (Object_t * __this /* static, unused */, UInt32U5BU5D_t697* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t697* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t697* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m6791 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1132 * Kernel_modInverse_m6792 (Object_t * __this /* static, unused */, BigInteger_t1132 * ___bi, BigInteger_t1132 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
