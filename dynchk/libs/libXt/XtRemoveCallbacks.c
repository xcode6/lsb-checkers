// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtRemoveCallbacks
static void(*funcptr) (Widget , char * , XtCallbackList ) = 0;

extern int __lsb_check_params;
void XtRemoveCallbacks (Widget arg0 , char * arg1 , XtCallbackList arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtRemoveCallbacks ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtRemoveCallbacks()");
		validate_NULL_TYPETYPE(  arg0, "XtRemoveCallbacks - arg0");
		validate_RWaddress( arg1, "XtRemoveCallbacks - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtRemoveCallbacks - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtRemoveCallbacks - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

