// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XVisualIDFromVisual
static VisualID(*funcptr) (Visual * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
VisualID XVisualIDFromVisual (Visual * arg0 )
{
	int reset_flag = __lsb_check_params;
	VisualID ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XVisualIDFromVisual");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XVisualIDFromVisual()");
	validate_RWaddress( arg0, "XVisualIDFromVisual - arg0");
		validate_NULL_TYPETYPE(  arg0, "XVisualIDFromVisual - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

