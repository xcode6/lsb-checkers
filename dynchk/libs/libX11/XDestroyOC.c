// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XDestroyOC
static void(*funcptr) (XOC ) = 0;

extern int __lsb_check_params;
void XDestroyOC (XOC arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XDestroyOC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDestroyOC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XDestroyOC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDestroyOC() - validating");
		validate_NULL_TYPETYPE(  arg0, "XDestroyOC - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

