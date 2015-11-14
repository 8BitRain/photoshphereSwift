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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2060;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14303_gshared (Enumerator_t2067 * __this, Dictionary_2_t2060 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14303(__this, ___dictionary, method) (( void (*) (Enumerator_t2067 *, Dictionary_2_t2060 *, const MethodInfo*))Enumerator__ctor_m14303_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14304_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14304(__this, method) (( Object_t * (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14304_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14305_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14305(__this, method) (( void (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14305_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1048  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14306_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14306(__this, method) (( DictionaryEntry_t1048  (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14306_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14307_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14307(__this, method) (( Object_t * (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14307_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14308_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14308(__this, method) (( Object_t * (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14308_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14309_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14309(__this, method) (( bool (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_MoveNext_m14309_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2062  Enumerator_get_Current_m14310_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14310(__this, method) (( KeyValuePair_2_t2062  (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_get_Current_m14310_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14311_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14311(__this, method) (( Object_t * (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_get_CurrentKey_m14311_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14312_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14312(__this, method) (( int32_t (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_get_CurrentValue_m14312_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m14313_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14313(__this, method) (( void (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_Reset_m14313_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m14314_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14314(__this, method) (( void (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_VerifyState_m14314_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14315_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14315(__this, method) (( void (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_VerifyCurrent_m14315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m14316_gshared (Enumerator_t2067 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14316(__this, method) (( void (*) (Enumerator_t2067 *, const MethodInfo*))Enumerator_Dispose_m14316_gshared)(__this, method)
