// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XStringToKeysym
static KeySym(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
KeySym XStringToKeysym (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	KeySym ret_value  ;
	__lsb_output(4, "Invoking wrapper for XStringToKeysym()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XStringToKeysym");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XStringToKeysym. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XStringToKeysym() - validating");
		validate_Rdaddress( arg0, "XStringToKeysym - arg0");
		validate_NULL_TYPETYPE(  arg0, "XStringToKeysym - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

