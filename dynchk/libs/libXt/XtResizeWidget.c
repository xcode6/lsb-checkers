// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#undef XtResizeWidget
static void(*funcptr) (Widget , unsigned int , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
void XtResizeWidget (Widget arg0 , unsigned int arg1 , unsigned int arg2 , unsigned int arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtResizeWidget ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtResizeWidget()");
		validate_NULL_TYPETYPE(  arg0, "XtResizeWidget - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtResizeWidget - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtResizeWidget - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtResizeWidget - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

