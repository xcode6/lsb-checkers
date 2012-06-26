// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <rpc/xdr.h>
#undef xdr_int
static bool_t(*funcptr) (XDR * , int * ) = 0;

extern int __lsb_check_params;
bool_t xdr_int (XDR * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xdr_int()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "xdr_int", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_int", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_int", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_int", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_int", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_int", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_int", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xdr_int. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdr_int() - validating");
		validate_RWaddress( arg0, "xdr_int - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg0, "xdr_int - arg0 (__xdrs)");
		validate_RWaddress( arg1, "xdr_int - arg1 (__ip)");
		validate_NULL_TYPETYPE(  arg1, "xdr_int - arg1 (__ip)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

