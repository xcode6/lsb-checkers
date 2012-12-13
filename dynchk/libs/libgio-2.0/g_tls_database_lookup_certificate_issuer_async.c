// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gtlsdatabase.h>
#undef g_tls_database_lookup_certificate_issuer_async
static void(*funcptr) (GTlsDatabase * , GTlsCertificate * , GTlsInteraction * , GTlsDatabaseLookupFlags , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_tls_database_lookup_certificate_issuer_async (GTlsDatabase * arg0 , GTlsCertificate * arg1 , GTlsInteraction * arg2 , GTlsDatabaseLookupFlags arg3 , GCancellable * arg4 , GAsyncReadyCallback arg5 , gpointer arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_tls_database_lookup_certificate_issuer_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_database_lookup_certificate_issuer_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_database_lookup_certificate_issuer_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_database_lookup_certificate_issuer_async() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_database_lookup_certificate_issuer_async - arg0 (self)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_database_lookup_certificate_issuer_async - arg0 (self)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_tls_database_lookup_certificate_issuer_async - arg1 (certificate)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_database_lookup_certificate_issuer_async - arg1 (certificate)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_tls_database_lookup_certificate_issuer_async - arg2 (interaction)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_tls_database_lookup_certificate_issuer_async - arg2 (interaction)");
		validate_NULL_TYPETYPE(  arg3, "g_tls_database_lookup_certificate_issuer_async - arg3 (flags)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_tls_database_lookup_certificate_issuer_async - arg4 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_tls_database_lookup_certificate_issuer_async - arg4 (cancellable)");
		validate_NULL_TYPETYPE(  arg5, "g_tls_database_lookup_certificate_issuer_async - arg5 (callback)");
		validate_NULL_TYPETYPE(  arg6, "g_tls_database_lookup_certificate_issuer_async - arg6 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

