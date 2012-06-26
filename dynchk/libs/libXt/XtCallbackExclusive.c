// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtCallbackExclusive
static void(*funcptr) (Widget , XtPointer , XtPointer ) = 0;

extern int __lsb_check_params;
void XtCallbackExclusive (Widget arg0 , XtPointer arg1 , XtPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtCallbackExclusive()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCallbackExclusive");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtCallbackExclusive. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtCallbackExclusive() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtCallbackExclusive - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCallbackExclusive - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtCallbackExclusive - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

