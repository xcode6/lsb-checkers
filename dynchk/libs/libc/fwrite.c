// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>
#undef fwrite
static size_t(*funcptr) (const void * , size_t , size_t , FILE * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
size_t fwrite (const void * arg0 , size_t arg1 , size_t arg2 , FILE * arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fwrite");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "fwrite()");
	validate_Rdaddress( arg0, "fwrite - arg0");
		validate_NULL_TYPETYPE(  arg0, "fwrite - arg0");
		validate_NULL_TYPETYPE(  arg1, "fwrite - arg1");
		validate_NULL_TYPETYPE(  arg2, "fwrite - arg2");
	validate_RWaddress( arg3, "fwrite - arg3");
		validate_NULL_TYPETYPE(  arg3, "fwrite - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

