// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#include <nspr4/prtypes.h>
#include <nss3/ssl.h>
#undef SSL_CipherPrefSet
static SECStatus(*funcptr) (PRFileDesc * , PRInt32 , PRBool ) = 0;

extern int __lsb_check_params;
SECStatus SSL_CipherPrefSet (PRFileDesc * arg0 , PRInt32 arg1 , PRBool arg2 )
{
	int reset_flag = __lsb_check_params;
	SECStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for SSL_CipherPrefSet()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "SSL_CipherPrefSet", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SSL_CipherPrefSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SSL_CipherPrefSet() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "SSL_CipherPrefSet - arg0 (fd)");
		}
		validate_NULL_TYPETYPE(  arg0, "SSL_CipherPrefSet - arg0 (fd)");
		validate_NULL_TYPETYPE(  arg1, "SSL_CipherPrefSet - arg1 (cipher)");
		validate_NULL_TYPETYPE(  arg2, "SSL_CipherPrefSet - arg2 (enabled)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

