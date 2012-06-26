// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_spawn_on_screen_with_pipes
static gboolean(*funcptr) (GdkScreen * , const gchar * , gchar * * , gchar * * , GSpawnFlags , GSpawnChildSetupFunc , gpointer , gint * , gint * , gint * , gint * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean gdk_spawn_on_screen_with_pipes (GdkScreen * arg0 , const gchar * arg1 , gchar * * arg2 , gchar * * arg3 , GSpawnFlags arg4 , GSpawnChildSetupFunc arg5 , gpointer arg6 , gint * arg7 , gint * arg8 , gint * arg9 , gint * arg10 , GError * * arg11 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_spawn_on_screen_with_pipes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_spawn_on_screen_with_pipes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_spawn_on_screen_with_pipes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_spawn_on_screen_with_pipes() - validating");
		validate_RWaddress( arg0, "gdk_spawn_on_screen_with_pipes - arg0 (screen)");
		validate_NULL_TYPETYPE(  arg0, "gdk_spawn_on_screen_with_pipes - arg0 (screen)");
		validate_Rdaddress( arg1, "gdk_spawn_on_screen_with_pipes - arg1 (working_directory)");
		validate_NULL_TYPETYPE(  arg1, "gdk_spawn_on_screen_with_pipes - arg1 (working_directory)");
		validate_RWaddress( arg2, "gdk_spawn_on_screen_with_pipes - arg2 (argv)");
		validate_NULL_TYPETYPE(  arg2, "gdk_spawn_on_screen_with_pipes - arg2 (argv)");
		validate_RWaddress( arg3, "gdk_spawn_on_screen_with_pipes - arg3 (envp)");
		validate_NULL_TYPETYPE(  arg3, "gdk_spawn_on_screen_with_pipes - arg3 (envp)");
		validate_NULL_TYPETYPE(  arg4, "gdk_spawn_on_screen_with_pipes - arg4 (flags)");
		validate_NULL_TYPETYPE(  arg5, "gdk_spawn_on_screen_with_pipes - arg5 (child_setup)");
		validate_NULL_TYPETYPE(  arg6, "gdk_spawn_on_screen_with_pipes - arg6 (user_data)");
		validate_RWaddress( arg7, "gdk_spawn_on_screen_with_pipes - arg7 (child_pid)");
		validate_NULL_TYPETYPE(  arg7, "gdk_spawn_on_screen_with_pipes - arg7 (child_pid)");
		validate_RWaddress( arg8, "gdk_spawn_on_screen_with_pipes - arg8 (standard_input)");
		validate_NULL_TYPETYPE(  arg8, "gdk_spawn_on_screen_with_pipes - arg8 (standard_input)");
		validate_RWaddress( arg9, "gdk_spawn_on_screen_with_pipes - arg9 (standard_output)");
		validate_NULL_TYPETYPE(  arg9, "gdk_spawn_on_screen_with_pipes - arg9 (standard_output)");
		validate_RWaddress( arg10, "gdk_spawn_on_screen_with_pipes - arg10 (standard_error)");
		validate_NULL_TYPETYPE(  arg10, "gdk_spawn_on_screen_with_pipes - arg10 (standard_error)");
		validate_RWaddress( arg11, "gdk_spawn_on_screen_with_pipes - arg11 (error)");
		validate_NULL_TYPETYPE(  arg11, "gdk_spawn_on_screen_with_pipes - arg11 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
	__lsb_check_params = reset_flag;
	return ret_value;
}

