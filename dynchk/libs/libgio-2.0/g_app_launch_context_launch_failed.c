// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gappinfo.h>
#undef g_app_launch_context_launch_failed
static void(*funcptr) (GAppLaunchContext * , const char * ) = 0;

extern int __lsb_check_params;
void g_app_launch_context_launch_failed (GAppLaunchContext * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_app_launch_context_launch_failed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_app_launch_context_launch_failed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_app_launch_context_launch_failed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_app_launch_context_launch_failed() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_app_launch_context_launch_failed - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_app_launch_context_launch_failed - arg0 (context)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_app_launch_context_launch_failed - arg1 (startup_notify_id)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_app_launch_context_launch_failed - arg1 (startup_notify_id)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

