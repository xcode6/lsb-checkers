// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocket.h>
#undef g_socket_join_multicast_group
static gboolean(*funcptr) (GSocket * , GInetAddress * , gboolean , const char * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_socket_join_multicast_group (GSocket * arg0 , GInetAddress * arg1 , gboolean arg2 , const char * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_join_multicast_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_join_multicast_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_join_multicast_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_join_multicast_group() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_join_multicast_group - arg0 (socket)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_join_multicast_group - arg0 (socket)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_socket_join_multicast_group - arg1 (group)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_socket_join_multicast_group - arg1 (group)");
		validate_NULL_TYPETYPE(  arg2, "g_socket_join_multicast_group - arg2 (source_specific)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_socket_join_multicast_group - arg3 (iface)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_socket_join_multicast_group - arg3 (iface)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_socket_join_multicast_group - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_socket_join_multicast_group - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

