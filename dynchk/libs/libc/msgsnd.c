// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/msg.h>
#undef msgsnd
static int(*funcptr) (int , const void * , size_t , int ) = 0;

extern int __lsb_check_params;
int msgsnd (int arg0 , const void * arg1 , size_t arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "msgsnd", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "msgsnd()");
		validate_NULL_TYPETYPE(  arg0, "msgsnd - arg0");
		validate_Rdaddress( arg1, "msgsnd - arg1");
		validate_NULL_TYPETYPE(  arg1, "msgsnd - arg1");
		validate_NULL_TYPETYPE(  arg2, "msgsnd - arg2");
		validate_NULL_TYPETYPE(  arg3, "msgsnd - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

