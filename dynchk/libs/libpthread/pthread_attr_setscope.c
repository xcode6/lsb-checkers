// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_attr_setscope
static int(*funcptr) (pthread_attr_t * , int ) = 0;

extern int __lsb_check_params;
int pthread_attr_setscope (pthread_attr_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_setscope");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "pthread_attr_setscope - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_attr_setscope - arg0");
		validate_NULL_TYPETYPE(  arg1, "pthread_attr_setscope - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

