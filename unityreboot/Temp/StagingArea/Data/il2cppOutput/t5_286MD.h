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

struct t5_286;
struct t1_29;
struct t1_18;
struct t1_1;
struct t5_212;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_1541_gshared (t5_286 * __this, const MethodInfo* method);
#define m5_1541(__this, method) (( void (*) (t5_286 *, const MethodInfo*))m5_1541_gshared)(__this, method)
extern "C" t1_29 * m5_1542_gshared (t5_286 * __this, t1_18* p0, t1_1 * p1, const MethodInfo* method);
#define m5_1542(__this, p0, p1, method) (( t1_29 * (*) (t5_286 *, t1_18*, t1_1 *, const MethodInfo*))m5_1542_gshared)(__this, p0, p1, method)
extern "C" t5_212 * m5_1543_gshared (t5_286 * __this, t1_1 * p0, t1_29 * p1, const MethodInfo* method);
#define m5_1543(__this, p0, p1, method) (( t5_212 * (*) (t5_286 *, t1_1 *, t1_29 *, const MethodInfo*))m5_1543_gshared)(__this, p0, p1, method)
