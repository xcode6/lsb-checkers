// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtAddInput
static XtInputId(*funcptr) (int , XtPointer , XtInputCallbackProc , XtPointer ) = 0;

extern int __lsb_check_params;
XtInputId XtAddInput (int arg0 , XtPointer arg1 , XtInputCallbackProc arg2 , XtPointer arg3 )
{
	int reset_flag = __lsb_check_params;
	XtInputId ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtAddInput ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtAddInput()");
		validate_NULL_TYPETYPE(  arg0, "XtAddInput - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAddInput - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtAddInput - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtAddInput - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

