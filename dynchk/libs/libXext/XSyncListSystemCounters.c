// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/extensions/sync.h>
#undef XSyncListSystemCounters
static XSyncSystemCounter *(*funcptr) (Display * , int * ) = 0;

extern int __lsb_check_params;
XSyncSystemCounter * XSyncListSystemCounters (Display * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	XSyncSystemCounter * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XSyncListSystemCounters ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XSyncListSystemCounters()");
		validate_RWaddress( arg0, "XSyncListSystemCounters - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSyncListSystemCounters - arg0");
		validate_RWaddress( arg1, "XSyncListSystemCounters - arg1");
		validate_NULL_TYPETYPE(  arg1, "XSyncListSystemCounters - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

