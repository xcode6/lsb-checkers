// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/mman.h>
#undef mlock
static int(*funcptr) (const void * , size_t ) = 0;

extern int __lsb_check_params;
int mlock (const void * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mlock");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "mlock - arg0");
		validate_NULL_TYPETYPE(  arg0, "mlock - arg0");
		validate_NULL_TYPETYPE(  arg1, "mlock - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

