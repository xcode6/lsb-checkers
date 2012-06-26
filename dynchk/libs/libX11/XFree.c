// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XFree
static int(*funcptr) (void * ) = 0;

extern int __lsb_check_params;
int XFree (void * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XFree()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFree");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XFree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XFree() - validating");
		validate_RWaddress( arg0, "XFree - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFree - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

