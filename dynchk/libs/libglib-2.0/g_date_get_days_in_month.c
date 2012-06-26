// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_date_get_days_in_month
static guint8(*funcptr) (GDateMonth , GDateYear ) = 0;

extern int __lsb_check_params;
guint8 g_date_get_days_in_month (GDateMonth arg0 , GDateYear arg1 )
{
	int reset_flag = __lsb_check_params;
	guint8 ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_date_get_days_in_month()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_get_days_in_month");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_get_days_in_month. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_get_days_in_month() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_date_get_days_in_month - arg0 (month)");
		validate_NULL_TYPETYPE(  arg1, "g_date_get_days_in_month - arg1 (year)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

