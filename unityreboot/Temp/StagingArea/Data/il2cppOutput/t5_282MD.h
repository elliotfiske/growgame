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

struct t5_282;
struct t1_29;
struct t1_18;
struct t1_1;
struct t5_209;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_1519_gshared (t5_282 * __this, const MethodInfo* method);
#define m5_1519(__this, method) (( void (*) (t5_282 *, const MethodInfo*))m5_1519_gshared)(__this, method)
extern "C" t1_29 * m5_1520_gshared (t5_282 * __this, t1_18* p0, t1_1 * p1, const MethodInfo* method);
#define m5_1520(__this, p0, p1, method) (( t1_29 * (*) (t5_282 *, t1_18*, t1_1 *, const MethodInfo*))m5_1520_gshared)(__this, p0, p1, method)
extern "C" t5_209 * m5_1521_gshared (t5_282 * __this, t1_1 * p0, t1_29 * p1, const MethodInfo* method);
#define m5_1521(__this, p0, p1, method) (( t5_209 * (*) (t5_282 *, t1_1 *, t1_29 *, const MethodInfo*))m5_1521_gshared)(__this, p0, p1, method)
