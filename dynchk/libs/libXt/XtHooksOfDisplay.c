// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#undef XtHooksOfDisplay
static Widget(*funcptr) (Display * ) = 0;

extern int __lsb_check_params;
Widget XtHooksOfDisplay (Display * arg0 )
{
	int reset_flag = __lsb_check_params;
	Widget ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtHooksOfDisplay ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtHooksOfDisplay()");
		validate_RWaddress( arg0, "XtHooksOfDisplay - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtHooksOfDisplay - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

