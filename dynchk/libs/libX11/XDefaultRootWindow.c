// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XDefaultRootWindow
static Window(*funcptr) (Display * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
Window XDefaultRootWindow (Display * arg0 )
{
	int reset_flag = __lsb_check_params;
	Window ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDefaultRootWindow");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XDefaultRootWindow()");
	validate_Rdaddress( arg0, "XDefaultRootWindow - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDefaultRootWindow - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

