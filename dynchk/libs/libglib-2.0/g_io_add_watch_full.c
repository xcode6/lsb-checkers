// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_io_add_watch_full
static guint(*funcptr) (GIOChannel * , gint , GIOCondition , GIOFunc , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
guint g_io_add_watch_full (GIOChannel * arg0 , gint arg1 , GIOCondition arg2 , GIOFunc arg3 , gpointer arg4 , GDestroyNotify arg5 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_io_add_watch_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_add_watch_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_add_watch_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_add_watch_full() - validating");
		validate_RWaddress( arg0, "g_io_add_watch_full - arg0 (channel)");
		validate_NULL_TYPETYPE(  arg0, "g_io_add_watch_full - arg0 (channel)");
		validate_NULL_TYPETYPE(  arg1, "g_io_add_watch_full - arg1 (priority)");
		validate_NULL_TYPETYPE(  arg2, "g_io_add_watch_full - arg2 (condition)");
		validate_NULL_TYPETYPE(  arg3, "g_io_add_watch_full - arg3 (func)");
		validate_NULL_TYPETYPE(  arg4, "g_io_add_watch_full - arg4 (user_data)");
		validate_NULL_TYPETYPE(  arg5, "g_io_add_watch_full - arg5 (notify)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

