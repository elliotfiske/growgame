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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1242;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1238;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_1102;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m1_8906_gshared (ValueCollection_t1_1242 * __this, Dictionary_2_t1_1238 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1_8906(__this, ___dictionary, method) (( void (*) (ValueCollection_t1_1242 *, Dictionary_2_t1_1238 *, const MethodInfo*))ValueCollection__ctor_m1_8906_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_8907_gshared (ValueCollection_t1_1242 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_8907(__this, ___item, method) (( void (*) (ValueCollection_t1_1242 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_8907_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_8908_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_8908(__this, method) (( void (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_8908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_8909_gshared (ValueCollection_t1_1242 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_8909(__this, ___item, method) (( bool (*) (ValueCollection_t1_1242 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_8909_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_8910_gshared (ValueCollection_t1_1242 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_8910(__this, ___item, method) (( bool (*) (ValueCollection_t1_1242 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_8910_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_8911_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_8911(__this, method) (( Object_t* (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_8911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m1_8912_gshared (ValueCollection_t1_1242 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m1_8912(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1242 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m1_8912_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_8913_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_8913(__this, method) (( Object_t * (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_8913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_8914_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_8914(__this, method) (( bool (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_8914_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_8915_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_8915(__this, method) (( bool (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_8915_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_8916_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_8916(__this, method) (( Object_t * (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_8916_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m1_8917_gshared (ValueCollection_t1_1242 * __this, ObjectU5BU5D_t1_156* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m1_8917(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1242 *, ObjectU5BU5D_t1_156*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m1_8917_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1243  ValueCollection_GetEnumerator_m1_8918_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1_8918(__this, method) (( Enumerator_t1_1243  (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_GetEnumerator_m1_8918_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m1_8919_gshared (ValueCollection_t1_1242 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m1_8919(__this, method) (( int32_t (*) (ValueCollection_t1_1242 *, const MethodInfo*))ValueCollection_get_Count_m1_8919_gshared)(__this, method)
