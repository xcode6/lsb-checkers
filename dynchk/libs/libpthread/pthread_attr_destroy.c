// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_attr_destroy
static int(*funcptr) (pthread_attr_t * ) = 0;

extern int __lsb_check_params;
int pthread_attr_destroy (pthread_attr_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pthread_attr_destroy", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_attr_destroy()");
		validate_RWaddress( arg0, "pthread_attr_destroy - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_attr_destroy - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

