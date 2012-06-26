// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pthread.h>
#undef pthread_mutexattr_setprotocol
static int(*funcptr) (pthread_mutexattr_t * , int ) = 0;

extern int __lsb_check_params;
int pthread_mutexattr_setprotocol (pthread_mutexattr_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_mutexattr_setprotocol()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutexattr_setprotocol", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_mutexattr_setprotocol. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_mutexattr_setprotocol() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pthread_mutexattr_setprotocol - arg0 (__attr)");
		}
		validate_NULL_TYPETYPE(  arg0, "pthread_mutexattr_setprotocol - arg0 (__attr)");
		validate_NULL_TYPETYPE(  arg1, "pthread_mutexattr_setprotocol - arg1 (__protocol)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

