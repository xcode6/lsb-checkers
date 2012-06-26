// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_object_connect_property_change_handler
static guint(*funcptr) (AtkObject * , AtkPropertyChangeHandler * ) = 0;

extern int __lsb_check_params;
guint atk_object_connect_property_change_handler (AtkObject * arg0 , AtkPropertyChangeHandler * arg1 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_object_connect_property_change_handler()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_object_connect_property_change_handler");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_object_connect_property_change_handler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_object_connect_property_change_handler() - validating");
		validate_RWaddress( arg0, "atk_object_connect_property_change_handler - arg0 (accessible)");
		validate_NULL_TYPETYPE(  arg0, "atk_object_connect_property_change_handler - arg0 (accessible)");
		validate_RWaddress( arg1, "atk_object_connect_property_change_handler - arg1 (handler)");
		validate_NULL_TYPETYPE(  arg1, "atk_object_connect_property_change_handler - arg1 (handler)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

