// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/XKBlib.h>
#undef XkbOpenDisplay
static Display *(*funcptr) (char * , int * , int * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
Display * XkbOpenDisplay (char * arg0 , int * arg1 , int * arg2 , int * arg3 , int * arg4 , int * arg5 )
{
	int reset_flag = __lsb_check_params;
	Display * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbOpenDisplay ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbOpenDisplay()");
		validate_RWaddress( arg0, "XkbOpenDisplay - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbOpenDisplay - arg0");
		validate_RWaddress( arg1, "XkbOpenDisplay - arg1");
		validate_NULL_TYPETYPE(  arg1, "XkbOpenDisplay - arg1");
		validate_RWaddress( arg2, "XkbOpenDisplay - arg2");
		validate_NULL_TYPETYPE(  arg2, "XkbOpenDisplay - arg2");
		validate_RWaddress( arg3, "XkbOpenDisplay - arg3");
		validate_NULL_TYPETYPE(  arg3, "XkbOpenDisplay - arg3");
		validate_RWaddress( arg4, "XkbOpenDisplay - arg4");
		validate_NULL_TYPETYPE(  arg4, "XkbOpenDisplay - arg4");
		validate_RWaddress( arg5, "XkbOpenDisplay - arg5");
		validate_NULL_TYPETYPE(  arg5, "XkbOpenDisplay - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

