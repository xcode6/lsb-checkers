// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pthread.h>
#undef pthread_mutexattr_setrobust_np
static int(*funcptr) (pthread_mutexattr_t * , int ) = 0;

extern int __lsb_check_params;
int pthread_mutexattr_setrobust_np (pthread_mutexattr_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_mutexattr_setrobust_np()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setrobust_np", "GLIBC_2.4");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setrobust_np", "GLIBC_2.4");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setrobust_np", "GLIBC_2.4");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setrobust_np", "GLIBC_2.4");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setrobust_np", "GLIBC_2.4");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setrobust_np", "GLIBC_2.4");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setrobust_np", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_mutexattr_setrobust_np. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_mutexattr_setrobust_np() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pthread_mutexattr_setrobust_np - arg0 (__attr)");
		}
		validate_NULL_TYPETYPE(  arg0, "pthread_mutexattr_setrobust_np - arg0 (__attr)");
		validate_NULL_TYPETYPE(  arg1, "pthread_mutexattr_setrobust_np - arg1 (__robustness)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

