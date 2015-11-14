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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" void GL_Vertex3_m535 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" void GL_Begin_m533 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C" void GL_End_m536 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C" void GL_LoadOrtho_m531 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrixArgs(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrixArgs_m819 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrix_m538 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C" void GL_MultMatrix_m532 (Object_t * __this /* static, unused */, Matrix4x4_t37  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_MultMatrix(UnityEngine.Matrix4x4&)
extern "C" void GL_INTERNAL_CALL_MultMatrix_m820 (Object_t * __this /* static, unused */, Matrix4x4_t37 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C" void GL_PushMatrix_m530 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C" void GL_PopMatrix_m537 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C" void GL_Clear_m390 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Clear_m821 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Internal_Clear_m822 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C" void GL_INTERNAL_CALL_Internal_Clear_m823 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12 * ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEvent(System.Int32)
extern "C" void GL_IssuePluginEvent_m636 (Object_t * __this /* static, unused */, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
