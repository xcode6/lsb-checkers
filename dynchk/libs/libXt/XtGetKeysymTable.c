// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Intrinsic.h>
#undef XtGetKeysymTable
static KeySym *(*funcptr) (Display * , KeyCode * , int * ) = 0;

extern int __lsb_check_params;
KeySym * XtGetKeysymTable (Display * arg0 , KeyCode * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	KeySym * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtGetKeysymTable ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtGetKeysymTable()");
		validate_RWaddress( arg0, "XtGetKeysymTable - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtGetKeysymTable - arg0");
		validate_RWaddress( arg1, "XtGetKeysymTable - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtGetKeysymTable - arg1");
		validate_RWaddress( arg2, "XtGetKeysymTable - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtGetKeysymTable - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

