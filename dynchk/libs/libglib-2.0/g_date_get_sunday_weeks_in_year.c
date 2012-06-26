// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_date_get_sunday_weeks_in_year
static guint8(*funcptr) (GDateYear ) = 0;

extern int __lsb_check_params;
guint8 g_date_get_sunday_weeks_in_year (GDateYear arg0 )
{
	int reset_flag = __lsb_check_params;
	guint8 ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_date_get_sunday_weeks_in_year()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_get_sunday_weeks_in_year");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_get_sunday_weeks_in_year. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_get_sunday_weeks_in_year() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_date_get_sunday_weeks_in_year - arg0 (year)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

