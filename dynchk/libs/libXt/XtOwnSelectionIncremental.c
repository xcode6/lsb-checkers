// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
#undef XtOwnSelectionIncremental
static Boolean(*funcptr) (Widget , Atom , Time , XtConvertSelectionIncrProc , XtLoseSelectionIncrProc , XtSelectionDoneIncrProc , XtCancelConvertSelectionProc , XtPointer ) = 0;

extern int __lsb_check_params;
Boolean XtOwnSelectionIncremental (Widget arg0 , Atom arg1 , Time arg2 , XtConvertSelectionIncrProc arg3 , XtLoseSelectionIncrProc arg4 , XtSelectionDoneIncrProc arg5 , XtCancelConvertSelectionProc arg6 , XtPointer arg7 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtOwnSelectionIncremental ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtOwnSelectionIncremental()");
		validate_NULL_TYPETYPE(  arg0, "XtOwnSelectionIncremental - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtOwnSelectionIncremental - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtOwnSelectionIncremental - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtOwnSelectionIncremental - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtOwnSelectionIncremental - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtOwnSelectionIncremental - arg5");
		validate_NULL_TYPETYPE(  arg6, "XtOwnSelectionIncremental - arg6");
		validate_NULL_TYPETYPE(  arg7, "XtOwnSelectionIncremental - arg7");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

