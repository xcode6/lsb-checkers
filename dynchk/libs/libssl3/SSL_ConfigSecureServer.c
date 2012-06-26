// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#include <nss3/certt.h>
#include <nss3/keythi.h>
#include <nss3/sslt.h>
#include <nss3/ssl.h>
#undef SSL_ConfigSecureServer
static SECStatus(*funcptr) (PRFileDesc * , CERTCertificate * , SECKEYPrivateKey * , SSLKEAType ) = 0;

extern int __lsb_check_params;
SECStatus SSL_ConfigSecureServer (PRFileDesc * arg0 , CERTCertificate * arg1 , SECKEYPrivateKey * arg2 , SSLKEAType arg3 )
{
	int reset_flag = __lsb_check_params;
	SECStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for SSL_ConfigSecureServer()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "SSL_ConfigSecureServer", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SSL_ConfigSecureServer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SSL_ConfigSecureServer() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "SSL_ConfigSecureServer - arg0 (fd)");
		}
		validate_NULL_TYPETYPE(  arg0, "SSL_ConfigSecureServer - arg0 (fd)");
		if( arg1 ) {
		validate_RWaddress( arg1, "SSL_ConfigSecureServer - arg1 (cert)");
		}
		validate_NULL_TYPETYPE(  arg1, "SSL_ConfigSecureServer - arg1 (cert)");
		if( arg2 ) {
		validate_RWaddress( arg2, "SSL_ConfigSecureServer - arg2 (key)");
		}
		validate_NULL_TYPETYPE(  arg2, "SSL_ConfigSecureServer - arg2 (key)");
		validate_NULL_TYPETYPE(  arg3, "SSL_ConfigSecureServer - arg3 (kea)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

