#if defined(__i386__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__i386__)*/
#if defined(__ia64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__ia64__)*/
#if defined(__arm__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__arm__)*/
#if defined(__mc68000__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__mc68000__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__alpha__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__alpha__)*/
#if defined(__not_def__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) (struct _Unwind_Exception * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException (struct _Unwind_Exception * arg0 )
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	validate_RWaddress( arg0, "_Unwind_RaiseException - arg0");
		validate_NULL_TYPETYPE(  arg0, "_Unwind_RaiseException - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__not_def__)*/
#if defined(__powerpc64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_RaiseException
static _Unwind_Reason_Code(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Reason_Code _Unwind_RaiseException ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Reason_Code ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_RaiseException");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_RaiseException()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__s390x__)*/
