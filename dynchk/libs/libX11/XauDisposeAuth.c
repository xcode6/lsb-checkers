// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xauth.h>
#undef XauDisposeAuth
static void(*funcptr) (Xauth * ) = 0;

extern int __lsb_check_params;
void XauDisposeAuth (Xauth * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XauDisposeAuth()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XauDisposeAuth");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XauDisposeAuth. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XauDisposeAuth() - validating");
		validate_RWaddress( arg0, "XauDisposeAuth - arg0");
		validate_NULL_TYPETYPE(  arg0, "XauDisposeAuth - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

