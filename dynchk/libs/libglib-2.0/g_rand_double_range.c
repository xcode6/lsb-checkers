// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_rand_double_range
static gdouble(*funcptr) (GRand * , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
gdouble g_rand_double_range (GRand * arg0 , gdouble arg1 , gdouble arg2 )
{
	int reset_flag = __lsb_check_params;
	gdouble ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_rand_double_range()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_rand_double_range");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_rand_double_range. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_rand_double_range() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_rand_double_range - arg0 (rand_)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_rand_double_range - arg0 (rand_)");
		validate_NULL_TYPETYPE(  arg1, "g_rand_double_range - arg1 (begin)");
		validate_NULL_TYPETYPE(  arg2, "g_rand_double_range - arg2 (end)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

