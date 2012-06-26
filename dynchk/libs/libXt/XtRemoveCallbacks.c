// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtRemoveCallbacks
static void(*funcptr) (Widget , const char * , XtCallbackList ) = 0;

extern int __lsb_check_params;
void XtRemoveCallbacks (Widget arg0 , const char * arg1 , XtCallbackList arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtRemoveCallbacks()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveCallbacks");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtRemoveCallbacks. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtRemoveCallbacks() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtRemoveCallbacks - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XtRemoveCallbacks - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtRemoveCallbacks - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtRemoveCallbacks - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

