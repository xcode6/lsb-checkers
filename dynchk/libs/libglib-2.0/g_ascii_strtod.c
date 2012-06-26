// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_ascii_strtod
static gdouble(*funcptr) (const gchar * , gchar * * ) = 0;

extern int __lsb_check_params;
gdouble g_ascii_strtod (const gchar * arg0 , gchar * * arg1 )
{
	int reset_flag = __lsb_check_params;
	gdouble ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_ascii_strtod()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_ascii_strtod");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_ascii_strtod. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_ascii_strtod() - validating");
		validate_Rdaddress( arg0, "g_ascii_strtod - arg0 (nptr)");
		validate_NULL_TYPETYPE(  arg0, "g_ascii_strtod - arg0 (nptr)");
		validate_RWaddress( arg1, "g_ascii_strtod - arg1 (endptr)");
		validate_NULL_TYPETYPE(  arg1, "g_ascii_strtod - arg1 (endptr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

