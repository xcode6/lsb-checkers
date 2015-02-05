// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#include <nss3/ssl.h>
#undef SSL_DataPending
static int(*funcptr) (PRFileDesc * ) = 0;

extern int __lsb_check_params;
int SSL_DataPending (PRFileDesc * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for SSL_DataPending()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "SSL_DataPending", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SSL_DataPending. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SSL_DataPending() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "SSL_DataPending - arg0 (fd)");
		}
		validate_NULL_TYPETYPE(  arg0, "SSL_DataPending - arg0 (fd)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
