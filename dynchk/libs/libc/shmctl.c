// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/shm.h>
#undef shmctl
static int(*funcptr) (int , int , struct shmid_ds * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int shmctl (int arg0 , int arg1 , struct shmid_ds * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "shmctl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "shmctl()");
		validate_NULL_TYPETYPE(  arg0, "shmctl - arg0");
		validate_NULL_TYPETYPE(  arg1, "shmctl - arg1");
	validate_RWaddress( arg2, "shmctl - arg2");
		validate_NULL_TYPETYPE(  arg2, "shmctl - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

