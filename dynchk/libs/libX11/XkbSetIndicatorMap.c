// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbSetIndicatorMap
static int(*funcptr) (Display * , unsigned long , ) = 0;

extern int __lsb_check_params;
int XkbSetIndicatorMap (Display * arg0 , unsigned long arg1 ,  arg2)
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbSetIndicatorMap ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbSetIndicatorMap()");
		validate_RWaddress( arg0, "XkbSetIndicatorMap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbSetIndicatorMap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbSetIndicatorMap - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbSetIndicatorMap - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

