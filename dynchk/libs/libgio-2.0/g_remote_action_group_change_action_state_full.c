// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gremoteactiongroup.h>
#undef g_remote_action_group_change_action_state_full
static void(*funcptr) (GRemoteActionGroup * , const gchar * , GVariant * , GVariant * ) = 0;

extern int __lsb_check_params;
void g_remote_action_group_change_action_state_full (GRemoteActionGroup * arg0 , const gchar * arg1 , GVariant * arg2 , GVariant * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_remote_action_group_change_action_state_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_remote_action_group_change_action_state_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_remote_action_group_change_action_state_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_remote_action_group_change_action_state_full() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_remote_action_group_change_action_state_full - arg0 (remote)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_remote_action_group_change_action_state_full - arg0 (remote)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_remote_action_group_change_action_state_full - arg1 (action_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_remote_action_group_change_action_state_full - arg1 (action_name)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_remote_action_group_change_action_state_full - arg2 (value)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_remote_action_group_change_action_state_full - arg2 (value)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_remote_action_group_change_action_state_full - arg3 (platform_data)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_remote_action_group_change_action_state_full - arg3 (platform_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
