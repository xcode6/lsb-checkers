// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef posix_memalign
static int(*funcptr) (void * * , size_t , size_t ) = 0;

extern int __lsb_check_params;
int posix_memalign (void * * arg0 , size_t arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "posix_memalign");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "posix_memalign - arg0");
	validate_Rdaddress(* arg0, "posix_memalign - arg0");
		validate_NULL_TYPETYPE(  arg0, "posix_memalign - arg0");
		validate_NULL_TYPETYPE(  arg1, "posix_memalign - arg1");
		validate_NULL_TYPETYPE(  arg2, "posix_memalign - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

