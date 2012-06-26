// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_param_value_validate
static gboolean(*funcptr) (GParamSpec * , GValue * ) = 0;

extern int __lsb_check_params;
gboolean g_param_value_validate (GParamSpec * arg0 , GValue * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_param_value_validate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_param_value_validate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_param_value_validate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_param_value_validate() - validating");
		validate_RWaddress( arg0, "g_param_value_validate - arg0");
		validate_NULL_TYPETYPE(  arg0, "g_param_value_validate - arg0");
		validate_RWaddress( arg1, "g_param_value_validate - arg1");
		validate_NULL_TYPETYPE(  arg1, "g_param_value_validate - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

