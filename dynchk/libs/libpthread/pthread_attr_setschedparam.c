// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#include <sched.h>
#undef pthread_attr_setschedparam
static int(*funcptr) (pthread_attr_t * , const struct sched_param * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int pthread_attr_setschedparam (pthread_attr_t * arg0 , const struct sched_param * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_setschedparam");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "pthread_attr_setschedparam()");
	validate_RWaddress( arg0, "pthread_attr_setschedparam - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_attr_setschedparam - arg0");
	validate_Rdaddress( arg1, "pthread_attr_setschedparam - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_attr_setschedparam - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

