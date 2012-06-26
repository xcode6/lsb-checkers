// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_strv_length
static guint(*funcptr) (gchar * * ) = 0;

extern int __lsb_check_params;
guint g_strv_length (gchar * * arg0 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_strv_length()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_strv_length");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_strv_length. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_strv_length() - validating");
		validate_RWaddress( arg0, "g_strv_length - arg0 (str_array)");
		validate_NULL_TYPETYPE(  arg0, "g_strv_length - arg0 (str_array)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

