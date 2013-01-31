// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gtlsdatabase.h>
#undef g_tls_database_verify_chain
static GTlsCertificateFlags(*funcptr) (GTlsDatabase * , GTlsCertificate * , const gchar * , GSocketConnectable * , GTlsInteraction * , GTlsDatabaseVerifyFlags , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
GTlsCertificateFlags g_tls_database_verify_chain (GTlsDatabase * arg0 , GTlsCertificate * arg1 , const gchar * arg2 , GSocketConnectable * arg3 , GTlsInteraction * arg4 , GTlsDatabaseVerifyFlags arg5 , GCancellable * arg6 , GError * * arg7 )
{
	int reset_flag = __lsb_check_params;
	GTlsCertificateFlags ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_database_verify_chain()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_database_verify_chain");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_database_verify_chain. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_database_verify_chain() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_database_verify_chain - arg0 (self)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_database_verify_chain - arg0 (self)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_tls_database_verify_chain - arg1 (chain)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_database_verify_chain - arg1 (chain)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_tls_database_verify_chain - arg2 (purpose)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_tls_database_verify_chain - arg2 (purpose)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_tls_database_verify_chain - arg3 (identity)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_tls_database_verify_chain - arg3 (identity)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_tls_database_verify_chain - arg4 (interaction)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_tls_database_verify_chain - arg4 (interaction)");
		validate_NULL_TYPETYPE(  arg5, "g_tls_database_verify_chain - arg5 (flags)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_tls_database_verify_chain - arg6 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_tls_database_verify_chain - arg6 (cancellable)");
		if( arg7 ) {
		validate_RWaddress( arg7, "g_tls_database_verify_chain - arg7 (error)");
		}
		validate_NULL_TYPETYPE(  arg7, "g_tls_database_verify_chain - arg7 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}
