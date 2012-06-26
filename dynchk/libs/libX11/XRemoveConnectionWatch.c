// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XRemoveConnectionWatch
static void(*funcptr) (Display * , XConnectionWatchProc , XPointer ) = 0;

extern int __lsb_check_params;
void XRemoveConnectionWatch (Display * arg0 , XConnectionWatchProc arg1 , XPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XRemoveConnectionWatch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRemoveConnectionWatch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRemoveConnectionWatch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRemoveConnectionWatch() - validating");
		validate_RWaddress( arg0, "XRemoveConnectionWatch - arg0");
		validate_NULL_TYPETYPE(  arg0, "XRemoveConnectionWatch - arg0");
		validate_NULL_TYPETYPE(  arg1, "XRemoveConnectionWatch - arg1");
		validate_NULL_TYPETYPE(  arg2, "XRemoveConnectionWatch - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

