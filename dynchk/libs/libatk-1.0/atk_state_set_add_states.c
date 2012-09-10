// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_state_set_add_states
static void(*funcptr) (AtkStateSet * , AtkStateType * , gint ) = 0;

extern int __lsb_check_params;
void atk_state_set_add_states (AtkStateSet * arg0 , AtkStateType * arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for atk_state_set_add_states()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_state_set_add_states");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_state_set_add_states. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_state_set_add_states() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_state_set_add_states - arg0 (set)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_state_set_add_states - arg0 (set)");
		if( arg1 ) {
		validate_RWaddress( arg1, "atk_state_set_add_states - arg1 (types)");
		}
		validate_NULL_TYPETYPE(  arg1, "atk_state_set_add_states - arg1 (types)");
		validate_NULL_TYPETYPE(  arg2, "atk_state_set_add_states - arg2 (n_types)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

