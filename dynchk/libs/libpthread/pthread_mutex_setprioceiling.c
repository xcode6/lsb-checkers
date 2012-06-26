// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pthread.h>
#undef pthread_mutex_setprioceiling
static int(*funcptr) (pthread_mutex_t * , int , int * ) = 0;

extern int __lsb_check_params;
int pthread_mutex_setprioceiling (pthread_mutex_t * arg0 , int arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_mutex_setprioceiling()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_setprioceiling", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_mutex_setprioceiling. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_mutex_setprioceiling() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pthread_mutex_setprioceiling - arg0 (__mutex)");
		}
		validate_NULL_TYPETYPE(  arg0, "pthread_mutex_setprioceiling - arg0 (__mutex)");
		validate_NULL_TYPETYPE(  arg1, "pthread_mutex_setprioceiling - arg1 (__prioceiling)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pthread_mutex_setprioceiling - arg2 (__old_ceiling)");
		}
		validate_NULL_TYPETYPE(  arg2, "pthread_mutex_setprioceiling - arg2 (__old_ceiling)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

