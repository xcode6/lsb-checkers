// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_mutex_destroy
static int(*funcptr) (pthread_mutex_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int pthread_mutex_destroy (pthread_mutex_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_mutex_destroy");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "pthread_mutex_destroy()");
	validate_RWaddress( arg0, "pthread_mutex_destroy - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_mutex_destroy - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

