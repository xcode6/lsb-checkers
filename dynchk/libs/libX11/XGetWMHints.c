// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XGetWMHints
static XWMHints *(*funcptr) (Display * , Window ) = 0;

extern int __lsb_check_params;
XWMHints * XGetWMHints (Display * arg0 , Window arg1 )
{
	int reset_flag = __lsb_check_params;
	XWMHints * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XGetWMHints");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetWMHints()");
		validate_RWaddress( arg0, "XGetWMHints - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetWMHints - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetWMHints - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

