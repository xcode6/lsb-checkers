// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_once
static int(*funcptr) (pthread_once_t * , void(* )(void)) = 0;

extern int __lsb_check_params;
int pthread_once (pthread_once_t * arg0 , void(* arg1 )(void))
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_once");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "pthread_once - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_once - arg0");
validate_Rdaddress( arg1, "pthread_once - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_once - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

