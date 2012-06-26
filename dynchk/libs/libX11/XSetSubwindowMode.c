// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XSetSubwindowMode
static int(*funcptr) (Display * , GC , int ) = 0;

extern int __lsb_check_params;
int XSetSubwindowMode (Display * arg0 , GC arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSetSubwindowMode()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetSubwindowMode");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetSubwindowMode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetSubwindowMode() - validating");
		validate_RWaddress( arg0, "XSetSubwindowMode - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetSubwindowMode - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetSubwindowMode - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetSubwindowMode - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

