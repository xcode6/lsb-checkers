// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
#undef XtGetApplicationNameAndClass
static void(*funcptr) (Display * , String * , String * ) = 0;

extern int __lsb_check_params;
void XtGetApplicationNameAndClass (Display * arg0 , String * arg1 , String * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtGetApplicationNameAndClass ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtGetApplicationNameAndClass()");
		validate_RWaddress( arg0, "XtGetApplicationNameAndClass - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtGetApplicationNameAndClass - arg0");
		validate_RWaddress( arg1, "XtGetApplicationNameAndClass - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtGetApplicationNameAndClass - arg1");
		validate_RWaddress( arg2, "XtGetApplicationNameAndClass - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtGetApplicationNameAndClass - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

