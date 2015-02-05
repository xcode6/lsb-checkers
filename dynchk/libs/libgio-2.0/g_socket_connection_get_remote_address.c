// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocketconnection.h>
#undef g_socket_connection_get_remote_address
static GSocketAddress *(*funcptr) (GSocketConnection * , GError * * ) = 0;

extern int __lsb_check_params;
GSocketAddress * g_socket_connection_get_remote_address (GSocketConnection * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	GSocketAddress * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_connection_get_remote_address()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_connection_get_remote_address");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_connection_get_remote_address. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_connection_get_remote_address() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_connection_get_remote_address - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_connection_get_remote_address - arg0 (connection)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_socket_connection_get_remote_address - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_socket_connection_get_remote_address - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
