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

struct t2_18;
struct t1_1;
struct t1_35;
struct t1_36;

#include "codegen/il2cpp-codegen.h"
#include "t1_24.h"

extern "C" void m2_64_gshared (t2_18 * __this, t1_1 * p0, t1_24 p1, const MethodInfo* method);
#define m2_64(__this, p0, p1, method) (( void (*) (t2_18 *, t1_1 *, t1_24, const MethodInfo*))m2_64_gshared)(__this, p0, p1, method)
extern "C" t1_1 * m2_65_gshared (t2_18 * __this, t1_1 * p0, const MethodInfo* method);
#define m2_65(__this, p0, method) (( t1_1 * (*) (t2_18 *, t1_1 *, const MethodInfo*))m2_65_gshared)(__this, p0, method)
extern "C" t1_1 * m2_66_gshared (t2_18 * __this, t1_1 * p0, t1_36 * p1, t1_1 * p2, const MethodInfo* method);
#define m2_66(__this, p0, p1, p2, method) (( t1_1 * (*) (t2_18 *, t1_1 *, t1_36 *, t1_1 *, const MethodInfo*))m2_66_gshared)(__this, p0, p1, p2, method)
extern "C" t1_1 * m2_67_gshared (t2_18 * __this, t1_1 * p0, const MethodInfo* method);
#define m2_67(__this, p0, method) (( t1_1 * (*) (t2_18 *, t1_1 *, const MethodInfo*))m2_67_gshared)(__this, p0, method)
