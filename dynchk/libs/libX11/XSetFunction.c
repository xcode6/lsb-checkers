// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XSetFunction
static int(*funcptr) (Display * , GC , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XSetFunction (Display * arg0 , GC arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetFunction");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSetFunction()");
	validate_RWaddress( arg0, "XSetFunction - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetFunction - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetFunction - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetFunction - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

