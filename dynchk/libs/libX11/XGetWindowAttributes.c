// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XGetWindowAttributes
static int(*funcptr) (Display * , Window , XWindowAttributes * ) = 0;

extern int __lsb_check_params;
int XGetWindowAttributes (Display * arg0 , Window arg1 , XWindowAttributes * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XGetWindowAttributes ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XGetWindowAttributes()");
		validate_RWaddress( arg0, "XGetWindowAttributes - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetWindowAttributes - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetWindowAttributes - arg1");
		validate_RWaddress( arg2, "XGetWindowAttributes - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetWindowAttributes - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

