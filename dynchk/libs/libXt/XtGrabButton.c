// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
#undef XtGrabButton
static void(*funcptr) (Widget , int , Modifiers , int , unsigned int , int , int , Window , Cursor ) = 0;

extern int __lsb_check_params;
void XtGrabButton (Widget arg0 , int arg1 , Modifiers arg2 , int arg3 , unsigned int arg4 , int arg5 , int arg6 , Window arg7 , Cursor arg8 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtGrabButton ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtGrabButton()");
		validate_NULL_TYPETYPE(  arg0, "XtGrabButton - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtGrabButton - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtGrabButton - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtGrabButton - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtGrabButton - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtGrabButton - arg5");
		validate_NULL_TYPETYPE(  arg6, "XtGrabButton - arg6");
		validate_NULL_TYPETYPE(  arg7, "XtGrabButton - arg7");
		validate_NULL_TYPETYPE(  arg8, "XtGrabButton - arg8");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

