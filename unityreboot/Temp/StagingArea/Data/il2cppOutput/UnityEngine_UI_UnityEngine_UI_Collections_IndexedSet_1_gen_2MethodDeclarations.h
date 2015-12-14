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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t6_211;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_1102;
// System.Object[]
struct ObjectU5BU5D_t1_156;
// System.Predicate`1<System.Object>
struct Predicate_1_t1_954;
// System.Comparison`1<System.Object>
struct Comparison_1_t1_959;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m6_1632_gshared (IndexedSet_1_t6_211 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m6_1632(__this, method) (( void (*) (IndexedSet_1_t6_211 *, const MethodInfo*))IndexedSet_1__ctor_m6_1632_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m6_1634_gshared (IndexedSet_1_t6_211 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m6_1634(__this, method) (( Object_t * (*) (IndexedSet_1_t6_211 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m6_1634_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m6_1636_gshared (IndexedSet_1_t6_211 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m6_1636(__this, ___item, method) (( void (*) (IndexedSet_1_t6_211 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m6_1636_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
extern "C" bool IndexedSet_1_AddUnique_m6_1637_gshared (IndexedSet_1_t6_211 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_AddUnique_m6_1637(__this, ___item, method) (( bool (*) (IndexedSet_1_t6_211 *, Object_t *, const MethodInfo*))IndexedSet_1_AddUnique_m6_1637_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m6_1639_gshared (IndexedSet_1_t6_211 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m6_1639(__this, ___item, method) (( bool (*) (IndexedSet_1_t6_211 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m6_1639_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m6_1641_gshared (IndexedSet_1_t6_211 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m6_1641(__this, method) (( Object_t* (*) (IndexedSet_1_t6_211 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m6_1641_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m6_1643_gshared (IndexedSet_1_t6_211 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m6_1643(__this, method) (( void (*) (IndexedSet_1_t6_211 *, const MethodInfo*))IndexedSet_1_Clear_m6_1643_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m6_1645_gshared (IndexedSet_1_t6_211 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m6_1645(__this, ___item, method) (( bool (*) (IndexedSet_1_t6_211 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m6_1645_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m6_1647_gshared (IndexedSet_1_t6_211 * __this, ObjectU5BU5D_t1_156* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m6_1647(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t6_211 *, ObjectU5BU5D_t1_156*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m6_1647_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m6_1649_gshared (IndexedSet_1_t6_211 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m6_1649(__this, method) (( int32_t (*) (IndexedSet_1_t6_211 *, const MethodInfo*))IndexedSet_1_get_Count_m6_1649_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m6_1651_gshared (IndexedSet_1_t6_211 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m6_1651(__this, method) (( bool (*) (IndexedSet_1_t6_211 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m6_1651_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m6_1653_gshared (IndexedSet_1_t6_211 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m6_1653(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t6_211 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m6_1653_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m6_1655_gshared (IndexedSet_1_t6_211 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m6_1655(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t6_211 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m6_1655_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m6_1657_gshared (IndexedSet_1_t6_211 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m6_1657(__this, ___index, method) (( void (*) (IndexedSet_1_t6_211 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m6_1657_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m6_1659_gshared (IndexedSet_1_t6_211 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m6_1659(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t6_211 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m6_1659_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m6_1661_gshared (IndexedSet_1_t6_211 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m6_1661(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t6_211 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m6_1661_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m6_1663_gshared (IndexedSet_1_t6_211 * __this, Predicate_1_t1_954 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m6_1663(__this, ___match, method) (( void (*) (IndexedSet_1_t6_211 *, Predicate_1_t1_954 *, const MethodInfo*))IndexedSet_1_RemoveAll_m6_1663_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m6_1664_gshared (IndexedSet_1_t6_211 * __this, Comparison_1_t1_959 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m6_1664(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t6_211 *, Comparison_1_t1_959 *, const MethodInfo*))IndexedSet_1_Sort_m6_1664_gshared)(__this, ___sortLayoutFunction, method)
