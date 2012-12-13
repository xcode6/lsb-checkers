// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gtlsclientconnection.h>
#undef g_tls_client_connection_get_validation_flags
static GTlsCertificateFlags(*funcptr) (GTlsClientConnection * ) = 0;

extern int __lsb_check_params;
GTlsCertificateFlags g_tls_client_connection_get_validation_flags (GTlsClientConnection * arg0 )
{
	int reset_flag = __lsb_check_params;
	GTlsCertificateFlags ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_client_connection_get_validation_flags()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_client_connection_get_validation_flags");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_client_connection_get_validation_flags. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_client_connection_get_validation_flags() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_client_connection_get_validation_flags - arg0 (conn)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_client_connection_get_validation_flags - arg0 (conn)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

