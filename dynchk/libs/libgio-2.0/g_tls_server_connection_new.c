// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gtlsserverconnection.h>
#undef g_tls_server_connection_new
static GIOStream *(*funcptr) (GIOStream * , GTlsCertificate * , GError * * ) = 0;

extern int __lsb_check_params;
GIOStream * g_tls_server_connection_new (GIOStream * arg0 , GTlsCertificate * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	GIOStream * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_server_connection_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_server_connection_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_server_connection_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_server_connection_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_server_connection_new - arg0 (base_io_stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_server_connection_new - arg0 (base_io_stream)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_tls_server_connection_new - arg1 (certificate)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_server_connection_new - arg1 (certificate)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_tls_server_connection_new - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_tls_server_connection_new - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

