// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <semaphore.h>
#undef sem_getvalue
static int(*funcptr) (sem_t * , int * ) = 0;

extern int __lsb_check_params;
int sem_getvalue (sem_t * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_getvalue");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "sem_getvalue - arg0");
		validate_NULL_TYPETYPE(  arg0, "sem_getvalue - arg0");
	validate_Rdaddress( arg1, "sem_getvalue - arg1");
		validate_NULL_TYPETYPE(  arg1, "sem_getvalue - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

