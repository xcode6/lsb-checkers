// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XGetWMHints
static XWMHints *(*funcptr) (Display * , Window ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
XWMHints * XGetWMHints (Display * arg0 , Window arg1 )
{
	int reset_flag = __lsb_check_params;
	XWMHints * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetWMHints");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XGetWMHints()");
	validate_Rdaddress( arg0, "XGetWMHints - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetWMHints - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetWMHints - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

