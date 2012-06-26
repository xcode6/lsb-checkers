// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtAppAddInput
static XtInputId(*funcptr) (XtAppContext , int , XtPointer , XtInputCallbackProc , XtPointer ) = 0;

extern int __lsb_check_params;
XtInputId XtAppAddInput (XtAppContext arg0 , int arg1 , XtPointer arg2 , XtInputCallbackProc arg3 , XtPointer arg4 )
{
	int reset_flag = __lsb_check_params;
	XtInputId ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtAppAddInput()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppAddInput");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtAppAddInput. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtAppAddInput() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtAppAddInput - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAppAddInput - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtAppAddInput - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtAppAddInput - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtAppAddInput - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

