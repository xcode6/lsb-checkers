// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_spawn_command_line_sync
static gboolean(*funcptr) (const gchar * , gchar * * , gchar * * , gint * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_spawn_command_line_sync (const gchar * arg0 , gchar * * arg1 , gchar * * arg2 , gint * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_spawn_command_line_sync()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_spawn_command_line_sync");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_spawn_command_line_sync. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_spawn_command_line_sync() - validating");
		validate_Rdaddress( arg0, "g_spawn_command_line_sync - arg0 (command_line)");
		validate_NULL_TYPETYPE(  arg0, "g_spawn_command_line_sync - arg0 (command_line)");
		validate_RWaddress( arg1, "g_spawn_command_line_sync - arg1 (standard_output)");
		validate_NULL_TYPETYPE(  arg1, "g_spawn_command_line_sync - arg1 (standard_output)");
		validate_RWaddress( arg2, "g_spawn_command_line_sync - arg2 (standard_error)");
		validate_NULL_TYPETYPE(  arg2, "g_spawn_command_line_sync - arg2 (standard_error)");
		validate_RWaddress( arg3, "g_spawn_command_line_sync - arg3 (exit_status)");
		validate_NULL_TYPETYPE(  arg3, "g_spawn_command_line_sync - arg3 (exit_status)");
		validate_RWaddress( arg4, "g_spawn_command_line_sync - arg4 (error)");
		validate_NULL_TYPETYPE(  arg4, "g_spawn_command_line_sync - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

