// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <fcntl.h>
#undef posix_fadvise64
static int(*funcptr) (int , off64_t , off64_t , int ) = 0;

extern int __lsb_check_params;
int posix_fadvise64 (int arg0 , off64_t arg1 , off64_t arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for posix_fadvise64()");
	if(!funcptr)
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "posix_fadvise64", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "posix_fadvise64", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "posix_fadvise64", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "posix_fadvise64", "GLIBC_2.3");
		#endif
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "posix_fadvise64", "GLIBC_2.3.3");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "posix_fadvise64", "GLIBC_2.3.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "posix_fadvise64", "GLIBC_2.3.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load posix_fadvise64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "posix_fadvise64() - validating");
		validate_NULL_TYPETYPE(  arg0, "posix_fadvise64 - arg0 (__fd)");
		validate_NULL_TYPETYPE(  arg1, "posix_fadvise64 - arg1 (__offset)");
		validate_NULL_TYPETYPE(  arg2, "posix_fadvise64 - arg2 (__len)");
		validate_NULL_TYPETYPE(  arg3, "posix_fadvise64 - arg3 (__advise)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

