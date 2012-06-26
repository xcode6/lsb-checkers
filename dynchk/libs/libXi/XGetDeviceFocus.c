// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XInput.h>
#include <X11/X.h>
#undef XGetDeviceFocus
static int(*funcptr) (Display * , XDevice * , Window * , int * , Time * ) = 0;

extern int __lsb_check_params;
int XGetDeviceFocus (Display * arg0 , XDevice * arg1 , Window * arg2 , int * arg3 , Time * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetDeviceFocus()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetDeviceFocus");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetDeviceFocus. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetDeviceFocus() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XGetDeviceFocus - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XGetDeviceFocus - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XGetDeviceFocus - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XGetDeviceFocus - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XGetDeviceFocus - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XGetDeviceFocus - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XGetDeviceFocus - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XGetDeviceFocus - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XGetDeviceFocus - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XGetDeviceFocus - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

