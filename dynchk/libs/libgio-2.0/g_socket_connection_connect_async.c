// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocketconnection.h>
#undef g_socket_connection_connect_async
static void(*funcptr) (GSocketConnection * , GSocketAddress * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_socket_connection_connect_async (GSocketConnection * arg0 , GSocketAddress * arg1 , GCancellable * arg2 , GAsyncReadyCallback arg3 , gpointer arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_socket_connection_connect_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_connection_connect_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_connection_connect_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_connection_connect_async() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_connection_connect_async - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_connection_connect_async - arg0 (connection)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_socket_connection_connect_async - arg1 (address)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_socket_connection_connect_async - arg1 (address)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_socket_connection_connect_async - arg2 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_socket_connection_connect_async - arg2 (cancellable)");
		validate_NULL_TYPETYPE(  arg3, "g_socket_connection_connect_async - arg3 (callback)");
		validate_NULL_TYPETYPE(  arg4, "g_socket_connection_connect_async - arg4 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

