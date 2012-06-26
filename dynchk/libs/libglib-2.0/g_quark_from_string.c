// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_quark_from_string
static GQuark(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
GQuark g_quark_from_string (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	GQuark ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_quark_from_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_quark_from_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_quark_from_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_quark_from_string() - validating");
		validate_Rdaddress( arg0, "g_quark_from_string - arg0 (string)");
		validate_NULL_TYPETYPE(  arg0, "g_quark_from_string - arg0 (string)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

