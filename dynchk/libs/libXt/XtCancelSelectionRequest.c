// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
#undef XtCancelSelectionRequest
static void(*funcptr) (Widget , Atom ) = 0;

extern int __lsb_check_params;
void XtCancelSelectionRequest (Widget arg0 , Atom arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtCancelSelectionRequest ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtCancelSelectionRequest()");
		validate_NULL_TYPETYPE(  arg0, "XtCancelSelectionRequest - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCancelSelectionRequest - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

