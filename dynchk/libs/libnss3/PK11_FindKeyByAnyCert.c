// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nss3/certt.h>
#include <nss3/pk11pub.h>
#undef PK11_FindKeyByAnyCert
static SECKEYPrivateKey *(*funcptr) (CERTCertificate * , void * ) = 0;

extern int __lsb_check_params;
SECKEYPrivateKey * PK11_FindKeyByAnyCert (CERTCertificate * arg0 , void * arg1 )
{
	int reset_flag = __lsb_check_params;
	SECKEYPrivateKey * ret_value  ;
	__lsb_output(4, "Invoking wrapper for PK11_FindKeyByAnyCert()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "PK11_FindKeyByAnyCert", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PK11_FindKeyByAnyCert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PK11_FindKeyByAnyCert() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PK11_FindKeyByAnyCert - arg0 (cert)");
		}
		validate_NULL_TYPETYPE(  arg0, "PK11_FindKeyByAnyCert - arg0 (cert)");
		if( arg1 ) {
		validate_RWaddress( arg1, "PK11_FindKeyByAnyCert - arg1 (wincx)");
		}
		validate_NULL_TYPETYPE(  arg1, "PK11_FindKeyByAnyCert - arg1 (wincx)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

