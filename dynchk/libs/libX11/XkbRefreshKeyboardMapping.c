// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/XKBlib.h>
#undef XkbRefreshKeyboardMapping
static int(*funcptr) (XkbMapNotifyEvent * ) = 0;

extern int __lsb_check_params;
int XkbRefreshKeyboardMapping (XkbMapNotifyEvent * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbRefreshKeyboardMapping()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbRefreshKeyboardMapping");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbRefreshKeyboardMapping. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbRefreshKeyboardMapping() - validating");
		validate_RWaddress( arg0, "XkbRefreshKeyboardMapping - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbRefreshKeyboardMapping - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

