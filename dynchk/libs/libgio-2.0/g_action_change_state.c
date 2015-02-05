// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gaction.h>
#undef g_action_change_state
static void(*funcptr) (GAction * , GVariant * ) = 0;

extern int __lsb_check_params;
void g_action_change_state (GAction * arg0 , GVariant * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_action_change_state()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_action_change_state");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_action_change_state. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_action_change_state() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_action_change_state - arg0 (action)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_action_change_state - arg0 (action)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_action_change_state - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_action_change_state - arg1 (value)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
