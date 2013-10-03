// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtGrabKey
static void(*funcptr) (Widget , unsigned int , Modifiers , int , int , int ) = 0;

extern int __lsb_check_params;
void XtGrabKey (Widget arg0 , unsigned int arg1 , Modifiers arg2 , int arg3 , int arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtGrabKey()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGrabKey");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtGrabKey. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtGrabKey() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtGrabKey - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtGrabKey - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtGrabKey - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtGrabKey - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtGrabKey - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtGrabKey - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

