// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocket.h>
#undef g_socket_condition_timed_wait
static gboolean(*funcptr) (GSocket * , GIOCondition , gint64 , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_socket_condition_timed_wait (GSocket * arg0 , GIOCondition arg1 , gint64 arg2 , GCancellable * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_condition_timed_wait()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_condition_timed_wait");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_condition_timed_wait. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_condition_timed_wait() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_condition_timed_wait - arg0 (socket)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_condition_timed_wait - arg0 (socket)");
		validate_NULL_TYPETYPE(  arg1, "g_socket_condition_timed_wait - arg1 (condition)");
		validate_NULL_TYPETYPE(  arg2, "g_socket_condition_timed_wait - arg2 (timeout)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_socket_condition_timed_wait - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_socket_condition_timed_wait - arg3 (cancellable)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_socket_condition_timed_wait - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_socket_condition_timed_wait - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
