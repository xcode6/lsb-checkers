// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XInput.h>
#include <X11/X.h>
#undef XAllowDeviceEvents
static int(*funcptr) (Display * , XDevice * , int , Time ) = 0;

extern int __lsb_check_params;
int XAllowDeviceEvents (Display * arg0 , XDevice * arg1 , int arg2 , Time arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XAllowDeviceEvents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllowDeviceEvents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XAllowDeviceEvents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XAllowDeviceEvents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XAllowDeviceEvents - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XAllowDeviceEvents - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XAllowDeviceEvents - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XAllowDeviceEvents - arg1");
		validate_NULL_TYPETYPE(  arg2, "XAllowDeviceEvents - arg2");
		validate_NULL_TYPETYPE(  arg3, "XAllowDeviceEvents - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

