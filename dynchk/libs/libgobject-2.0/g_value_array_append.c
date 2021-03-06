// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_value_array_append
static GValueArray *(*funcptr) (GValueArray * , const GValue * ) = 0;

extern int __lsb_check_params;
GValueArray * g_value_array_append (GValueArray * arg0 , const GValue * arg1 )
{
	int reset_flag = __lsb_check_params;
	GValueArray * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_value_array_append()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_value_array_append");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_value_array_append. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_value_array_append() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_value_array_append - arg0 (value_array)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_value_array_append - arg0 (value_array)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_value_array_append - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_value_array_append - arg1 (value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

