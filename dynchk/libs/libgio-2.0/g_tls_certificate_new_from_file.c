// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gtlscertificate.h>
#undef g_tls_certificate_new_from_file
static GTlsCertificate *(*funcptr) (const gchar * , GError * * ) = 0;

extern int __lsb_check_params;
GTlsCertificate * g_tls_certificate_new_from_file (const gchar * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	GTlsCertificate * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_certificate_new_from_file()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_certificate_new_from_file");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_certificate_new_from_file. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_certificate_new_from_file() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_tls_certificate_new_from_file - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_certificate_new_from_file - arg0 (file)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_tls_certificate_new_from_file - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_tls_certificate_new_from_file - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

