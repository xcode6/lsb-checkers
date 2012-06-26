// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pthread.h>
#include <sys/time.h>
#undef pthread_mutex_timedlock
static int(*funcptr) (pthread_mutex_t * , const struct timespec * ) = 0;

extern int __lsb_check_params;
int pthread_mutex_timedlock (pthread_mutex_t * arg0 , const struct timespec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_mutex_timedlock()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_timedlock", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_timedlock", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_timedlock", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_timedlock", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_timedlock", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_timedlock", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_timedlock", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_mutex_timedlock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_mutex_timedlock() - validating");
		validate_RWaddress( arg0, "pthread_mutex_timedlock - arg0 (__mutex)");
		validate_NULL_TYPETYPE(  arg0, "pthread_mutex_timedlock - arg0 (__mutex)");
		validate_Rdaddress( arg1, "pthread_mutex_timedlock - arg1 (__abstime)");
		validate_NULL_TYPETYPE(  arg1, "pthread_mutex_timedlock - arg1 (__abstime)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

