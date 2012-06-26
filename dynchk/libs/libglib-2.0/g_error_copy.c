// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_error_copy
static GError *(*funcptr) (const GError * ) = 0;

extern int __lsb_check_params;
GError * g_error_copy (const GError * arg0 )
{
	int reset_flag = __lsb_check_params;
	GError * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_error_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_error_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_error_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_error_copy() - validating");
		validate_Rdaddress( arg0, "g_error_copy - arg0 (error)");
		validate_NULL_TYPETYPE(  arg0, "g_error_copy - arg0 (error)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

