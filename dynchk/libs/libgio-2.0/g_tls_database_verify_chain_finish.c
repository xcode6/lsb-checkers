// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gtlsdatabase.h>
#undef g_tls_database_verify_chain_finish
static GTlsCertificateFlags(*funcptr) (GTlsDatabase * , GAsyncResult * , GError * * ) = 0;

extern int __lsb_check_params;
GTlsCertificateFlags g_tls_database_verify_chain_finish (GTlsDatabase * arg0 , GAsyncResult * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	GTlsCertificateFlags ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_database_verify_chain_finish()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_database_verify_chain_finish");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_database_verify_chain_finish. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_database_verify_chain_finish() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_database_verify_chain_finish - arg0 (self)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_database_verify_chain_finish - arg0 (self)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_tls_database_verify_chain_finish - arg1 (result)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_database_verify_chain_finish - arg1 (result)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_tls_database_verify_chain_finish - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_tls_database_verify_chain_finish - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

