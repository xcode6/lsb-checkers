// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef fgetpos64
static int(*funcptr) (FILE * , fpos64_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int fgetpos64 (FILE * arg0 , fpos64_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetpos64");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "fgetpos64()");
	validate_RWaddress( arg0, "fgetpos64 - arg0");
		validate_NULL_TYPETYPE(  arg0, "fgetpos64 - arg0");
	validate_RWaddress( arg1, "fgetpos64 - arg1");
		validate_NULL_TYPETYPE(  arg1, "fgetpos64 - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

