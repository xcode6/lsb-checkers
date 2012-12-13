// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/ginetsocketaddress.h>
#undef g_inet_socket_address_get_scope_id
static guint32(*funcptr) (GInetSocketAddress * ) = 0;

extern int __lsb_check_params;
guint32 g_inet_socket_address_get_scope_id (GInetSocketAddress * arg0 )
{
	int reset_flag = __lsb_check_params;
	guint32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_inet_socket_address_get_scope_id()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_inet_socket_address_get_scope_id");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_inet_socket_address_get_scope_id. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_inet_socket_address_get_scope_id() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_inet_socket_address_get_scope_id - arg0 (address)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_inet_socket_address_get_scope_id - arg0 (address)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

