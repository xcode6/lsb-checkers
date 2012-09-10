// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/sync.h>
#undef XSyncFreeSystemCounterList
static void(*funcptr) (XSyncSystemCounter * ) = 0;

extern int __lsb_check_params;
void XSyncFreeSystemCounterList (XSyncSystemCounter * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XSyncFreeSystemCounterList()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncFreeSystemCounterList");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSyncFreeSystemCounterList. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSyncFreeSystemCounterList() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XSyncFreeSystemCounterList - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XSyncFreeSystemCounterList - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

