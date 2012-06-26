// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_date_is_last_of_month
static gboolean(*funcptr) (const GDate * ) = 0;

extern int __lsb_check_params;
gboolean g_date_is_last_of_month (const GDate * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_date_is_last_of_month()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_is_last_of_month");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_is_last_of_month. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_is_last_of_month() - validating");
		validate_Rdaddress( arg0, "g_date_is_last_of_month - arg0 (date)");
		validate_NULL_TYPETYPE(  arg0, "g_date_is_last_of_month - arg0 (date)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

