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

struct t5_280;
struct t1_1;
struct t1_29;
struct t5_259;
struct t1_170;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_1511_gshared (t5_280 * __this, t1_1 * p0, t1_29 * p1, const MethodInfo* method);
#define m5_1511(__this, p0, p1, method) (( void (*) (t5_280 *, t1_1 *, t1_29 *, const MethodInfo*))m5_1511_gshared)(__this, p0, p1, method)
extern "C" void m5_1512_gshared (t5_280 * __this, t5_259 * p0, const MethodInfo* method);
#define m5_1512(__this, p0, method) (( void (*) (t5_280 *, t5_259 *, const MethodInfo*))m5_1512_gshared)(__this, p0, method)
extern "C" void m5_1513_gshared (t5_280 * __this, t1_170* p0, const MethodInfo* method);
#define m5_1513(__this, p0, method) (( void (*) (t5_280 *, t1_170*, const MethodInfo*))m5_1513_gshared)(__this, p0, method)
extern "C" bool m5_1514_gshared (t5_280 * __this, t1_1 * p0, t1_29 * p1, const MethodInfo* method);
#define m5_1514(__this, p0, p1, method) (( bool (*) (t5_280 *, t1_1 *, t1_29 *, const MethodInfo*))m5_1514_gshared)(__this, p0, p1, method)
