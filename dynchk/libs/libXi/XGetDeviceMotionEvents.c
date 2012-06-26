// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XInput.h>
#include <X11/X.h>
#undef XGetDeviceMotionEvents
static XDeviceTimeCoord *(*funcptr) (Display * , XDevice * , Time , Time , int * , int * , int * ) = 0;

extern int __lsb_check_params;
XDeviceTimeCoord * XGetDeviceMotionEvents (Display * arg0 , XDevice * arg1 , Time arg2 , Time arg3 , int * arg4 , int * arg5 , int * arg6 )
{
	int reset_flag = __lsb_check_params;
	XDeviceTimeCoord * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetDeviceMotionEvents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetDeviceMotionEvents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetDeviceMotionEvents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetDeviceMotionEvents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XGetDeviceMotionEvents - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XGetDeviceMotionEvents - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XGetDeviceMotionEvents - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XGetDeviceMotionEvents - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGetDeviceMotionEvents - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGetDeviceMotionEvents - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XGetDeviceMotionEvents - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XGetDeviceMotionEvents - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XGetDeviceMotionEvents - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XGetDeviceMotionEvents - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "XGetDeviceMotionEvents - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "XGetDeviceMotionEvents - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

