// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef memmove
static void *(*funcptr) (void * , const void * , size_t ) = 0;

extern int __lsb_check_params;
void * memmove (void * arg0 , const void * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memmove");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "memmove - arg0");
		validate_NULL_TYPETYPE(  arg0, "memmove - arg0");
	validate_Rdaddress( arg1, "memmove - arg1");
		validate_NULL_TYPETYPE(  arg1, "memmove - arg1");
		validate_NULL_TYPETYPE(  arg2, "memmove - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

