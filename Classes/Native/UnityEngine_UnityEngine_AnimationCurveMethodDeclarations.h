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

// UnityEngine.AnimationCurve
struct AnimationCurve_t251;
struct AnimationCurve_t251_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m1444 (AnimationCurve_t251 * __this, KeyframeU5BU5D_t408* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m1445 (AnimationCurve_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m1446 (AnimationCurve_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m1447 (AnimationCurve_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m1448 (AnimationCurve_t251 * __this, KeyframeU5BU5D_t408* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t251_marshal(const AnimationCurve_t251& unmarshaled, AnimationCurve_t251_marshaled& marshaled);
extern "C" void AnimationCurve_t251_marshal_back(const AnimationCurve_t251_marshaled& marshaled, AnimationCurve_t251& unmarshaled);
extern "C" void AnimationCurve_t251_marshal_cleanup(AnimationCurve_t251_marshaled& marshaled);
