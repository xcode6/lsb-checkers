// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <unistd.h>
#undef lseek64
static loff_t(*funcptr) (int , loff_t , int ) = 0;

extern int __lsb_check_params;
loff_t lseek64 (int arg0 , loff_t arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	loff_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for lseek64()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "lseek64", "GLIBC_2.1");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lseek64", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lseek64", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "lseek64", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lseek64", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "lseek64", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lseek64", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load lseek64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "lseek64() - validating");
		validate_NULL_TYPETYPE(  arg0, "lseek64 - arg0");
		validate_NULL_TYPETYPE(  arg1, "lseek64 - arg1");
		validate_NULL_TYPETYPE(  arg2, "lseek64 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

