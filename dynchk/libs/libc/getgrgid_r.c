// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <grp.h>
#include <stddef.h>
#undef getgrgid_r
static int(*funcptr) (gid_t , struct group * , char * , size_t , struct group * * ) = 0;

extern int __lsb_check_params;
int getgrgid_r (gid_t arg0 , struct group * arg1 , char * arg2 , size_t arg3 , struct group * * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getgrgid_r()");
	if(!funcptr)
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getgrgid_r", "GLIBC_2.1.2");
		#endif
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "getgrgid_r", "GLIBC_2.1.2");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getgrgid_r", "GLIBC_2.1.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "getgrgid_r", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getgrgid_r", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "getgrgid_r", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getgrgid_r", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getgrgid_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getgrgid_r() - validating");
		validate_NULL_TYPETYPE(  arg0, "getgrgid_r - arg0 (__gid)");
		validate_RWaddress( arg1, "getgrgid_r - arg1 (__resultbuf)");
		validate_NULL_TYPETYPE(  arg1, "getgrgid_r - arg1 (__resultbuf)");
		validate_RWaddress( arg2, "getgrgid_r - arg2 (__buffer)");
		validate_NULL_TYPETYPE(  arg2, "getgrgid_r - arg2 (__buffer)");
		validate_NULL_TYPETYPE(  arg3, "getgrgid_r - arg3 (__buflen)");
		validate_RWaddress( arg4, "getgrgid_r - arg4 (__result)");
		validate_NULL_TYPETYPE(  arg4, "getgrgid_r - arg4 (__result)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

