// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <pthread.h>
#undef pthread_cond_init
static int(*funcptr) (pthread_cond_t * , const pthread_condattr_t * ) = 0;

extern int __lsb_check_params;
int pthread_cond_init (pthread_cond_t * arg0 , const pthread_condattr_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pthread_cond_init", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_cond_init()");
		validate_RWaddress( arg0, "pthread_cond_init - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_cond_init - arg0");
		validate_Rdaddress( arg1, "pthread_cond_init - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_cond_init - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

