// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtCallCallbackList
static void(*funcptr) (Widget , XtCallbackList , XtPointer ) = 0;

extern int __lsb_check_params;
void XtCallCallbackList (Widget arg0 , XtCallbackList arg1 , XtPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtCallCallbackList()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCallCallbackList");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtCallCallbackList. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtCallCallbackList() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtCallCallbackList - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCallCallbackList - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtCallCallbackList - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

