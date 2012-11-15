// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_time_zone_find_interval
static gint(*funcptr) (GTimeZone * , GTimeType , gint64 ) = 0;

extern int __lsb_check_params;
gint g_time_zone_find_interval (GTimeZone * arg0 , GTimeType arg1 , gint64 arg2 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_time_zone_find_interval()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_time_zone_find_interval");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_time_zone_find_interval. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_time_zone_find_interval() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_time_zone_find_interval - arg0 (tz)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_time_zone_find_interval - arg0 (tz)");
		validate_NULL_TYPETYPE(  arg1, "g_time_zone_find_interval - arg1 (type)");
		validate_NULL_TYPETYPE(  arg2, "g_time_zone_find_interval - arg2 (time_)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
