// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/XInput.h>
#undef XOpenDevice
static XDevice *(*funcptr) (Display * , XID ) = 0;

extern int __lsb_check_params;
XDevice * XOpenDevice (Display * arg0 , XID arg1 )
{
	int reset_flag = __lsb_check_params;
	XDevice * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XOpenDevice()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XOpenDevice");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XOpenDevice. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XOpenDevice() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XOpenDevice - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XOpenDevice - arg0");
		validate_NULL_TYPETYPE(  arg1, "XOpenDevice - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
