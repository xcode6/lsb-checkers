// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_on_error_query
static void(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
void g_on_error_query (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_on_error_query()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_on_error_query");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_on_error_query. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_on_error_query() - validating");
		validate_Rdaddress( arg0, "g_on_error_query - arg0 (prg_name)");
		validate_NULL_TYPETYPE(  arg0, "g_on_error_query - arg0 (prg_name)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

