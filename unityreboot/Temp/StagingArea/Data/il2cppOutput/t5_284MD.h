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

struct t5_284;
struct t1_29;
struct t1_18;
struct t1_1;
struct t5_209;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_1525_gshared (t5_284 * __this, const MethodInfo* method);
#define m5_1525(__this, method) (( void (*) (t5_284 *, const MethodInfo*))m5_1525_gshared)(__this, method)
extern "C" t1_29 * m5_1526_gshared (t5_284 * __this, t1_18* p0, t1_1 * p1, const MethodInfo* method);
#define m5_1526(__this, p0, p1, method) (( t1_29 * (*) (t5_284 *, t1_18*, t1_1 *, const MethodInfo*))m5_1526_gshared)(__this, p0, p1, method)
extern "C" t5_209 * m5_1527_gshared (t5_284 * __this, t1_1 * p0, t1_29 * p1, const MethodInfo* method);
#define m5_1527(__this, p0, p1, method) (( t5_209 * (*) (t5_284 *, t1_1 *, t1_29 *, const MethodInfo*))m5_1527_gshared)(__this, p0, p1, method)
