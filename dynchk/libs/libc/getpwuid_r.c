// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <pwd.h>
#include <stddef.h>
#undef getpwuid_r
static int(*funcptr) (uid_t , struct passwd * , char * , size_t , struct passwd * * ) = 0;

extern int __lsb_check_params;
int getpwuid_r (uid_t arg0 , struct passwd * arg1 , char * arg2 , size_t arg3 , struct passwd * * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getpwuid_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "getpwuid_r", "GLIBC_2.1.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getpwuid_r", "GLIBC_2.1.2");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getpwuid_r", "GLIBC_2.1.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "getpwuid_r", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getpwuid_r", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "getpwuid_r", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getpwuid_r", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getpwuid_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getpwuid_r() - validating");
		validate_NULL_TYPETYPE(  arg0, "getpwuid_r - arg0 (__uid)");
		validate_RWaddress( arg1, "getpwuid_r - arg1 (__resultbuf)");
		validate_NULL_TYPETYPE(  arg1, "getpwuid_r - arg1 (__resultbuf)");
		validate_RWaddress( arg2, "getpwuid_r - arg2 (__buffer)");
		validate_NULL_TYPETYPE(  arg2, "getpwuid_r - arg2 (__buffer)");
		validate_NULL_TYPETYPE(  arg3, "getpwuid_r - arg3 (__buflen)");
		validate_RWaddress( arg4, "getpwuid_r - arg4 (__result)");
		validate_NULL_TYPETYPE(  arg4, "getpwuid_r - arg4 (__result)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

