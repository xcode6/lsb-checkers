// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <semaphore.h>
#undef sem_getvalue
static int(*funcptr) (sem_t * , int * ) = 0;

extern int __lsb_check_params;
int sem_getvalue (sem_t * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "sem_getvalue", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sem_getvalue()");
		validate_RWaddress( arg0, "sem_getvalue - arg0");
		validate_NULL_TYPETYPE(  arg0, "sem_getvalue - arg0");
		validate_RWaddress( arg1, "sem_getvalue - arg1");
		validate_NULL_TYPETYPE(  arg1, "sem_getvalue - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

