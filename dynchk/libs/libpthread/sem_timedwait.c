// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <semaphore.h>
#include <sys/time.h>
#undef sem_timedwait
static int(*funcptr) (sem_t * , const struct timespec * ) = 0;

extern int __lsb_check_params;
int sem_timedwait (sem_t * arg0 , const struct timespec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "sem_timedwait", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sem_timedwait()");
		validate_RWaddress( arg0, "sem_timedwait - arg0");
		validate_NULL_TYPETYPE(  arg0, "sem_timedwait - arg0");
		validate_Rdaddress( arg1, "sem_timedwait - arg1");
		validate_NULL_TYPETYPE(  arg1, "sem_timedwait - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

