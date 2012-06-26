// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XSetZoomHints
static int(*funcptr) (Display * , Window , XSizeHints * ) = 0;

extern int __lsb_check_params;
int XSetZoomHints (Display * arg0 , Window arg1 , XSizeHints * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSetZoomHints()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetZoomHints");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetZoomHints. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetZoomHints() - validating");
		validate_RWaddress( arg0, "XSetZoomHints - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetZoomHints - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetZoomHints - arg1");
		validate_RWaddress( arg2, "XSetZoomHints - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetZoomHints - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

