// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XForceScreenSaver
static int(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
int XForceScreenSaver (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XForceScreenSaver()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XForceScreenSaver");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XForceScreenSaver. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XForceScreenSaver() - validating");
		validate_RWaddress( arg0, "XForceScreenSaver - arg0");
		validate_NULL_TYPETYPE(  arg0, "XForceScreenSaver - arg0");
		validate_NULL_TYPETYPE(  arg1, "XForceScreenSaver - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

