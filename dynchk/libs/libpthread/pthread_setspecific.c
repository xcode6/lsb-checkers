// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_setspecific
static int(*funcptr) (pthread_key_t , const void * ) = 0;

extern int __lsb_check_params;
int pthread_setspecific (pthread_key_t arg0 , const void * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pthread_setspecific", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_setspecific()");
		validate_NULL_TYPETYPE(  arg0, "pthread_setspecific - arg0");
		validate_Rdaddress( arg1, "pthread_setspecific - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_setspecific - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

