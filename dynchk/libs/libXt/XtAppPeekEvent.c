// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
#undef XtAppPeekEvent
static Boolean(*funcptr) (XtAppContext , XEvent * ) = 0;

extern int __lsb_check_params;
Boolean XtAppPeekEvent (XtAppContext arg0 , XEvent * arg1 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtAppPeekEvent ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtAppPeekEvent()");
		validate_NULL_TYPETYPE(  arg0, "XtAppPeekEvent - arg0");
		validate_RWaddress( arg1, "XtAppPeekEvent - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtAppPeekEvent - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

