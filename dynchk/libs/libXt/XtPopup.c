// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtPopup
static void(*funcptr) (Widget , XtGrabKind ) = 0;

extern int __lsb_check_params;
void XtPopup (Widget arg0 , XtGrabKind arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtPopup ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtPopup()");
		validate_NULL_TYPETYPE(  arg0, "XtPopup - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtPopup - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

