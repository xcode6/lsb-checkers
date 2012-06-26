// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#undef pread
static ssize_t(*funcptr) (int , void * , size_t , off_t ) = 0;

extern int __lsb_check_params;
ssize_t pread (int arg0 , void * arg1 , size_t arg2 , off_t arg3 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for pread()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "pread", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "pread", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pread", "GLIBC_2.1");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pread", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pread", "GLIBC_2.1");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "pread", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pread", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pread. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pread() - validating");
		validate_NULL_TYPETYPE(  arg0, "pread - arg0");
		validate_RWaddress( arg1, "pread - arg1");
		validate_NULL_TYPETYPE(  arg1, "pread - arg1");
		validate_NULL_TYPETYPE(  arg2, "pread - arg2");
		validate_NULL_TYPETYPE(  arg3, "pread - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

