// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <rpc/xdr.h>
#undef xdrrec_skiprecord
static bool_t(*funcptr) (XDR * ) = 0;

extern int __lsb_check_params;
bool_t xdrrec_skiprecord (XDR * arg0 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xdrrec_skiprecord()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_skiprecord", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_skiprecord", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_skiprecord", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_skiprecord", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_skiprecord", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_skiprecord", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_skiprecord", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xdrrec_skiprecord. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdrrec_skiprecord() - validating");
		validate_RWaddress( arg0, "xdrrec_skiprecord - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg0, "xdrrec_skiprecord - arg0 (__xdrs)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
