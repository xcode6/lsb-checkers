// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtRemoveEventTypeHandler
static void(*funcptr) (Widget , int , XtPointer , XtEventHandler , XtPointer ) = 0;

extern int __lsb_check_params;
void XtRemoveEventTypeHandler (Widget arg0 , int arg1 , XtPointer arg2 , XtEventHandler arg3 , XtPointer arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtRemoveEventTypeHandler()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveEventTypeHandler");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtRemoveEventTypeHandler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtRemoveEventTypeHandler() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtRemoveEventTypeHandler - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtRemoveEventTypeHandler - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtRemoveEventTypeHandler - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtRemoveEventTypeHandler - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtRemoveEventTypeHandler - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

