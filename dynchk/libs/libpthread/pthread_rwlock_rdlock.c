// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <pthread.h>
#undef pthread_rwlock_rdlock
static int(*funcptr) (pthread_rwlock_t * ) = 0;

extern int __lsb_check_params;
int pthread_rwlock_rdlock (pthread_rwlock_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "pthread_rwlock_rdlock", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_rwlock_rdlock()");
		validate_RWaddress( arg0, "pthread_rwlock_rdlock - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_rwlock_rdlock - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

