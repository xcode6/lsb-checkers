// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocketlistener.h>
#undef g_socket_listener_accept_async
static void(*funcptr) (GSocketListener * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_socket_listener_accept_async (GSocketListener * arg0 , GCancellable * arg1 , GAsyncReadyCallback arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_socket_listener_accept_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_listener_accept_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_listener_accept_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_listener_accept_async() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_listener_accept_async - arg0 (listener)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_listener_accept_async - arg0 (listener)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_socket_listener_accept_async - arg1 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_socket_listener_accept_async - arg1 (cancellable)");
		validate_NULL_TYPETYPE(  arg2, "g_socket_listener_accept_async - arg2 (callback)");
		validate_NULL_TYPETYPE(  arg3, "g_socket_listener_accept_async - arg3 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

