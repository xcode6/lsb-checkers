// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocketconnection.h>
#undef g_socket_connection_factory_lookup_type
static GType(*funcptr) (GSocketFamily , GSocketType , gint ) = 0;

extern int __lsb_check_params;
GType g_socket_connection_factory_lookup_type (GSocketFamily arg0 , GSocketType arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	GType ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_connection_factory_lookup_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_connection_factory_lookup_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_connection_factory_lookup_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_connection_factory_lookup_type() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_socket_connection_factory_lookup_type - arg0 (family)");
		validate_NULL_TYPETYPE(  arg1, "g_socket_connection_factory_lookup_type - arg1 (type)");
		validate_NULL_TYPETYPE(  arg2, "g_socket_connection_factory_lookup_type - arg2 (protocol_id)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

