// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xutil.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XGetWMSizeHints
static int(*funcptr) (Display * , Window , XSizeHints * , long * , Atom ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XGetWMSizeHints (Display * arg0 , Window arg1 , XSizeHints * arg2 , long * arg3 , Atom arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetWMSizeHints");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XGetWMSizeHints()");
	validate_RWaddress( arg0, "XGetWMSizeHints - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetWMSizeHints - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetWMSizeHints - arg1");
	validate_RWaddress( arg2, "XGetWMSizeHints - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetWMSizeHints - arg2");
	validate_RWaddress( arg3, "XGetWMSizeHints - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGetWMSizeHints - arg3");
		validate_NULL_TYPETYPE(  arg4, "XGetWMSizeHints - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

