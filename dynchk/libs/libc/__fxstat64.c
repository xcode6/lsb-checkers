// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/stat.h>
#undef __fxstat64
static int(*funcptr) (int , int , struct stat64 * ) = 0;

extern int __lsb_check_params;
int __fxstat64 (int arg0 , int arg1 , struct stat64 * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__fxstat64");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "__fxstat64()");
		validate_NULL_TYPETYPE(  arg0, "__fxstat64 - arg0");
		validate_filedescriptor(  arg1, "__fxstat64 - arg1");
		validate_RWaddress( arg2, "__fxstat64 - arg2");
		validate_NULL_TYPETYPE(  arg2, "__fxstat64 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

