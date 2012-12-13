// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gtlsdatabase.h>
#undef g_tls_database_create_certificate_handle
static gchar *(*funcptr) (GTlsDatabase * , GTlsCertificate * ) = 0;

extern int __lsb_check_params;
gchar * g_tls_database_create_certificate_handle (GTlsDatabase * arg0 , GTlsCertificate * arg1 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_database_create_certificate_handle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_database_create_certificate_handle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_database_create_certificate_handle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_database_create_certificate_handle() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_database_create_certificate_handle - arg0 (self)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_database_create_certificate_handle - arg0 (self)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_tls_database_create_certificate_handle - arg1 (certificate)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_database_create_certificate_handle - arg1 (certificate)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

