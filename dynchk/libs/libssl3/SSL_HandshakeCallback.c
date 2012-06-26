// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#include <nss3/ssl.h>
#undef SSL_HandshakeCallback
static SECStatus(*funcptr) (PRFileDesc * , SSLHandshakeCallback , void * ) = 0;

extern int __lsb_check_params;
SECStatus SSL_HandshakeCallback (PRFileDesc * arg0 , SSLHandshakeCallback arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	SECStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for SSL_HandshakeCallback()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "SSL_HandshakeCallback", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SSL_HandshakeCallback. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SSL_HandshakeCallback() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "SSL_HandshakeCallback - arg0 (fd)");
		}
		validate_NULL_TYPETYPE(  arg0, "SSL_HandshakeCallback - arg0 (fd)");
		validate_NULL_TYPETYPE(  arg1, "SSL_HandshakeCallback - arg1 (cb)");
		if( arg2 ) {
		validate_RWaddress( arg2, "SSL_HandshakeCallback - arg2 (client_data)");
		}
		validate_NULL_TYPETYPE(  arg2, "SSL_HandshakeCallback - arg2 (client_data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

