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

struct t5_258;
struct t1_1;
struct t1_35;
struct t1_36;

#include "codegen/il2cpp-codegen.h"
#include "t1_24.h"
#include "t5_130.h"

extern "C" void m5_1442_gshared (t5_258 * __this, t1_1 * p0, t1_24 p1, const MethodInfo* method);
#define m5_1442(__this, p0, p1, method) (( void (*) (t5_258 *, t1_1 *, t1_24, const MethodInfo*))m5_1442_gshared)(__this, p0, p1, method)
extern "C" void m5_1594_gshared (t5_258 * __this, t5_130  p0, const MethodInfo* method);
#define m5_1594(__this, p0, method) (( void (*) (t5_258 *, t5_130 , const MethodInfo*))m5_1594_gshared)(__this, p0, method)
extern "C" t1_1 * m5_1595_gshared (t5_258 * __this, t5_130  p0, t1_36 * p1, t1_1 * p2, const MethodInfo* method);
#define m5_1595(__this, p0, p1, p2, method) (( t1_1 * (*) (t5_258 *, t5_130 , t1_36 *, t1_1 *, const MethodInfo*))m5_1595_gshared)(__this, p0, p1, p2, method)
extern "C" void m5_1596_gshared (t5_258 * __this, t1_1 * p0, const MethodInfo* method);
#define m5_1596(__this, p0, method) (( void (*) (t5_258 *, t1_1 *, const MethodInfo*))m5_1596_gshared)(__this, p0, method)
