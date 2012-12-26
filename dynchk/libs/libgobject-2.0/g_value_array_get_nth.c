// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_value_array_get_nth
static GValue *(*funcptr) (GValueArray * , guint ) = 0;

extern int __lsb_check_params;
GValue * g_value_array_get_nth (GValueArray * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	GValue * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_value_array_get_nth()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_value_array_get_nth");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_value_array_get_nth. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_value_array_get_nth() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_value_array_get_nth - arg0 (value_array)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_value_array_get_nth - arg0 (value_array)");
		validate_NULL_TYPETYPE(  arg1, "g_value_array_get_nth - arg1 (index_)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

