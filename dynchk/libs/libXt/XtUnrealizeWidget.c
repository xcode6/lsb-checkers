// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtUnrealizeWidget
static void(*funcptr) (Widget ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtUnrealizeWidget (Widget arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtUnrealizeWidget");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtUnrealizeWidget()");
		validate_NULL_TYPETYPE(  arg0, "XtUnrealizeWidget - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

