// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>
#undef fread
static size_t(*funcptr) (void * , size_t , size_t , FILE * ) = 0;

extern int __lsb_check_params;
size_t fread (void * arg0 , size_t arg1 , size_t arg2 , FILE * arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fread");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "fread()");
		validate_RWaddress( arg0, "fread - arg0");
		validate_NULL_TYPETYPE(  arg0, "fread - arg0");
		validate_NULL_TYPETYPE(  arg1, "fread - arg1");
		validate_NULL_TYPETYPE(  arg2, "fread - arg2");
		validate_RWaddress( arg3, "fread - arg3");
		validate_NULL_TYPETYPE(  arg3, "fread - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

