// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/sync.h>
#undef XSyncAwait
static int(*funcptr) (Display * , XSyncWaitCondition * , int ) = 0;

extern int __lsb_check_params;
int XSyncAwait (Display * arg0 , XSyncWaitCondition * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSyncAwait()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncAwait");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSyncAwait. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSyncAwait() - validating");
		validate_RWaddress( arg0, "XSyncAwait - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSyncAwait - arg0");
		validate_RWaddress( arg1, "XSyncAwait - arg1");
		validate_NULL_TYPETYPE(  arg1, "XSyncAwait - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSyncAwait - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

