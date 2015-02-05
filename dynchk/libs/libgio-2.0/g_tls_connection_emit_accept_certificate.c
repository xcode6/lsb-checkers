// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gtlsconnection.h>
#undef g_tls_connection_emit_accept_certificate
static gboolean(*funcptr) (GTlsConnection * , GTlsCertificate * , GTlsCertificateFlags ) = 0;

extern int __lsb_check_params;
gboolean g_tls_connection_emit_accept_certificate (GTlsConnection * arg0 , GTlsCertificate * arg1 , GTlsCertificateFlags arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_connection_emit_accept_certificate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_connection_emit_accept_certificate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_connection_emit_accept_certificate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_connection_emit_accept_certificate() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_connection_emit_accept_certificate - arg0 (conn)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_connection_emit_accept_certificate - arg0 (conn)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_tls_connection_emit_accept_certificate - arg1 (peer_cert)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_connection_emit_accept_certificate - arg1 (peer_cert)");
		validate_NULL_TYPETYPE(  arg2, "g_tls_connection_emit_accept_certificate - arg2 (errors)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
