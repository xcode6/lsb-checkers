// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XGetPointerControl
static int(*funcptr) (Display * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XGetPointerControl (Display * arg0 , int * arg1 , int * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetPointerControl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XGetPointerControl()");
	validate_Rdaddress( arg0, "XGetPointerControl - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetPointerControl - arg0");
	validate_Rdaddress( arg1, "XGetPointerControl - arg1");
		validate_NULL_TYPETYPE(  arg1, "XGetPointerControl - arg1");
	validate_Rdaddress( arg2, "XGetPointerControl - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetPointerControl - arg2");
	validate_Rdaddress( arg3, "XGetPointerControl - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGetPointerControl - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

