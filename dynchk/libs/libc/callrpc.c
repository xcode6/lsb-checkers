// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <rpc/xdr.h>
#include <rpc/clnt.h>
#undef callrpc
static int(*funcptr) (const char * , const u_long , const u_long , const u_long , const xdrproc_t , const char * , const xdrproc_t , char * ) = 0;

extern int __lsb_check_params;
int callrpc (const char * arg0 , const u_long arg1 , const u_long arg2 , const u_long arg3 , const xdrproc_t arg4 , const char * arg5 , const xdrproc_t arg6 , char * arg7 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for callrpc()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "callrpc", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "callrpc", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "callrpc", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "callrpc", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "callrpc", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "callrpc", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "callrpc", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load callrpc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "callrpc() - validating");
		validate_Rdaddress( arg0, "callrpc - arg0 (__host)");
		validate_NULL_TYPETYPE(  arg0, "callrpc - arg0 (__host)");
		validate_NULL_TYPETYPE(  arg1, "callrpc - arg1 (__prognum)");
		validate_NULL_TYPETYPE(  arg2, "callrpc - arg2 (__versnum)");
		validate_NULL_TYPETYPE(  arg3, "callrpc - arg3 (__procnum)");
		validate_NULL_TYPETYPE(  arg4, "callrpc - arg4 (__inproc)");
		validate_Rdaddress( arg5, "callrpc - arg5 (__in)");
		validate_NULL_TYPETYPE(  arg5, "callrpc - arg5 (__in)");
		validate_NULL_TYPETYPE(  arg6, "callrpc - arg6 (__outproc)");
		validate_RWaddress( arg7, "callrpc - arg7 (__out)");
		validate_NULL_TYPETYPE(  arg7, "callrpc - arg7 (__out)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

