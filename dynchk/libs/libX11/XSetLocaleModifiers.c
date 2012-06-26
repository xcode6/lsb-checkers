// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XSetLocaleModifiers
static char *(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
char * XSetLocaleModifiers (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSetLocaleModifiers()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetLocaleModifiers");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetLocaleModifiers. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetLocaleModifiers() - validating");
		validate_Rdaddress( arg0, "XSetLocaleModifiers - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetLocaleModifiers - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

