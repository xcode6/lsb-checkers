// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <semaphore.h>
#undef sem_wait
static int(*funcptr) (sem_t * ) = 0;

extern int __lsb_check_params;
int sem_wait (sem_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_wait");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "sem_wait - arg0");
		validate_NULL_TYPETYPE(  arg0, "sem_wait - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

