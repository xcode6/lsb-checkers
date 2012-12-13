// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocket.h>
#undef g_socket_receive
static gssize(*funcptr) (GSocket * , gchar * , gsize , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
gssize g_socket_receive (GSocket * arg0 , gchar * arg1 , gsize arg2 , GCancellable * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gssize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_receive()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_receive");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_receive. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_receive() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_receive - arg0 (socket)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_receive - arg0 (socket)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_socket_receive - arg1 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_socket_receive - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg2, "g_socket_receive - arg2 (size)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_socket_receive - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_socket_receive - arg3 (cancellable)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_socket_receive - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_socket_receive - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

