// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
#undef XtDispatchEventToWidget
static Boolean(*funcptr) (Widget , XEvent * ) = 0;

extern int __lsb_check_params;
Boolean XtDispatchEventToWidget (Widget arg0 , XEvent * arg1 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtDispatchEventToWidget()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtDispatchEventToWidget");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtDispatchEventToWidget. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtDispatchEventToWidget() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtDispatchEventToWidget - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XtDispatchEventToWidget - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtDispatchEventToWidget - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

