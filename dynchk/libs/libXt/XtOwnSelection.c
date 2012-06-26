// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <X11/X.h>
#undef XtOwnSelection
static Boolean(*funcptr) (Widget , Atom , Time , XtConvertSelectionProc , XtLoseSelectionProc , XtSelectionDoneProc ) = 0;

extern int __lsb_check_params;
Boolean XtOwnSelection (Widget arg0 , Atom arg1 , Time arg2 , XtConvertSelectionProc arg3 , XtLoseSelectionProc arg4 , XtSelectionDoneProc arg5 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtOwnSelection()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtOwnSelection");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtOwnSelection. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtOwnSelection() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtOwnSelection - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtOwnSelection - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtOwnSelection - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtOwnSelection - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtOwnSelection - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtOwnSelection - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

