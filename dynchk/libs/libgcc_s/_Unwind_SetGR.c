#if defined(__i386__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__i386__)*/
#if defined(__ia64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__ia64__)*/
#if defined(__arm__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__arm__)*/
#if defined(__mc68000__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__mc68000__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__alpha__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__alpha__)*/
#if defined(__powerpc64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_SetGR
static void(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _Unwind_SetGR ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_SetGR");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_SetGR()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

#endif /*defined(__s390x__)*/
