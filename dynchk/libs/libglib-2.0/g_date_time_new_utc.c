// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_date_time_new_utc
static GDateTime *(*funcptr) (gint , gint , gint , gint , gint , gdouble ) = 0;

extern int __lsb_check_params;
GDateTime * g_date_time_new_utc (gint arg0 , gint arg1 , gint arg2 , gint arg3 , gint arg4 , gdouble arg5 )
{
	int reset_flag = __lsb_check_params;
	GDateTime * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_date_time_new_utc()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_time_new_utc");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_time_new_utc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_time_new_utc() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_date_time_new_utc - arg0 (year)");
		validate_NULL_TYPETYPE(  arg1, "g_date_time_new_utc - arg1 (month)");
		validate_NULL_TYPETYPE(  arg2, "g_date_time_new_utc - arg2 (day)");
		validate_NULL_TYPETYPE(  arg3, "g_date_time_new_utc - arg3 (hour)");
		validate_NULL_TYPETYPE(  arg4, "g_date_time_new_utc - arg4 (minute)");
		validate_NULL_TYPETYPE(  arg5, "g_date_time_new_utc - arg5 (seconds)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
