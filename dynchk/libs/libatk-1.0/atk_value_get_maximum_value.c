// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib-object.h>
#undef atk_value_get_maximum_value
static void(*funcptr) (AtkValue * , GValue * ) = 0;

extern int __lsb_check_params;
void atk_value_get_maximum_value (AtkValue * arg0 , GValue * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for atk_value_get_maximum_value()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_value_get_maximum_value");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_value_get_maximum_value. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_value_get_maximum_value() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_value_get_maximum_value - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_value_get_maximum_value - arg0 (obj)");
		if( arg1 ) {
		validate_RWaddress( arg1, "atk_value_get_maximum_value - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "atk_value_get_maximum_value - arg1 (value)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

