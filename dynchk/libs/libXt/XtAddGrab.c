// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtAddGrab
static void(*funcptr) (Widget , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtAddGrab (Widget arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddGrab");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtAddGrab()");
		validate_NULL_TYPETYPE(  arg0, "XtAddGrab - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAddGrab - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtAddGrab - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

