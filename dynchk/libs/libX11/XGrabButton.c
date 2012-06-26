// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XGrabButton
static int(*funcptr) (Display * , unsigned int , unsigned int , Window , int , unsigned int , int , int , Window , Cursor ) = 0;

extern int __lsb_check_params;
int XGrabButton (Display * arg0 , unsigned int arg1 , unsigned int arg2 , Window arg3 , int arg4 , unsigned int arg5 , int arg6 , int arg7 , Window arg8 , Cursor arg9 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGrabButton()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGrabButton");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGrabButton. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGrabButton() - validating");
		validate_RWaddress( arg0, "XGrabButton - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGrabButton - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGrabButton - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGrabButton - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGrabButton - arg3");
		validate_NULL_TYPETYPE(  arg4, "XGrabButton - arg4");
		validate_NULL_TYPETYPE(  arg5, "XGrabButton - arg5");
		validate_NULL_TYPETYPE(  arg6, "XGrabButton - arg6");
		validate_NULL_TYPETYPE(  arg7, "XGrabButton - arg7");
		validate_NULL_TYPETYPE(  arg8, "XGrabButton - arg8");
		validate_NULL_TYPETYPE(  arg9, "XGrabButton - arg9");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}

