// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_value_set_param_take_ownership
static void(*funcptr) (GValue * , GParamSpec * ) = 0;

extern int __lsb_check_params;
void g_value_set_param_take_ownership (GValue * arg0 , GParamSpec * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_value_set_param_take_ownership()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_value_set_param_take_ownership");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_value_set_param_take_ownership. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_value_set_param_take_ownership() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_value_set_param_take_ownership - arg0 (value)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_value_set_param_take_ownership - arg0 (value)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_value_set_param_take_ownership - arg1 (param)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_value_set_param_take_ownership - arg1 (param)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

