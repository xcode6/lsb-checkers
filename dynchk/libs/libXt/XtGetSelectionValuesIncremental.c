// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/X.h>
#include <X11/Intrinsic.h>
#undef XtGetSelectionValuesIncremental
static void(*funcptr) (Widget , Atom , Atom * , int , XtSelectionCallbackProc , XtPointer * , Time ) = 0;

extern int __lsb_check_params;
void XtGetSelectionValuesIncremental (Widget arg0 , Atom arg1 , Atom * arg2 , int arg3 , XtSelectionCallbackProc arg4 , XtPointer * arg5 , Time arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtGetSelectionValuesIncremental()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetSelectionValuesIncremental");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtGetSelectionValuesIncremental. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtGetSelectionValuesIncremental() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtGetSelectionValuesIncremental - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtGetSelectionValuesIncremental - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtGetSelectionValuesIncremental - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtGetSelectionValuesIncremental - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtGetSelectionValuesIncremental - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtGetSelectionValuesIncremental - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XtGetSelectionValuesIncremental - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XtGetSelectionValuesIncremental - arg5");
		validate_NULL_TYPETYPE(  arg6, "XtGetSelectionValuesIncremental - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

