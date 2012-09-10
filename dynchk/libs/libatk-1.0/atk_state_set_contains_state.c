// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_state_set_contains_state
static gboolean(*funcptr) (AtkStateSet * , AtkStateType ) = 0;

extern int __lsb_check_params;
gboolean atk_state_set_contains_state (AtkStateSet * arg0 , AtkStateType arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_state_set_contains_state()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_state_set_contains_state");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_state_set_contains_state. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_state_set_contains_state() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_state_set_contains_state - arg0 (set)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_state_set_contains_state - arg0 (set)");
		validate_NULL_TYPETYPE(  arg1, "atk_state_set_contains_state - arg1 (type)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

