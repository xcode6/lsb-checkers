// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_condattr_getpshared
static int(*funcptr) (const pthread_condattr_t * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int pthread_condattr_getpshared (const pthread_condattr_t * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_condattr_getpshared");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "pthread_condattr_getpshared()");
	validate_Rdaddress( arg0, "pthread_condattr_getpshared - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_condattr_getpshared - arg0");
	validate_RWaddress( arg1, "pthread_condattr_getpshared - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_condattr_getpshared - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

