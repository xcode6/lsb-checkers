// Generated by gen_lib.pl (ignored)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_mutex_lock
static int(*funcptr) (pthread_mutex_t * ) = 0;

extern int(*__pthread_mutex_lock) (pthread_mutex_t * );

extern int __lsb_check_params;
int pthread_mutex_lock (pthread_mutex_t * arg0 )
{
    int reset_flag = __lsb_check_params;
    int ret_value;

    if(!funcptr)
	funcptr = __pthread_mutex_lock;
    if(__lsb_check_params)
    {
	__lsb_check_params = 0;
	validate_NULL_TYPETYPE(arg0, "pthread_mutex_lock");
    }
    ret_value = funcptr(arg0);
    __lsb_check_params = reset_flag;
    return ret_value;
}


