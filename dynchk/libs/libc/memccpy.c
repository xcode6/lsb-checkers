// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef memccpy
static void *(*funcptr) (void * , const void * , int , size_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void * memccpy (void * arg0 , const void * arg1 , int arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memccpy");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "memccpy()");
	validate_RWaddress( arg0, "memccpy - arg0");
		validate_NULL_TYPETYPE(  arg0, "memccpy - arg0");
	validate_Rdaddress( arg1, "memccpy - arg1");
		validate_NULL_TYPETYPE(  arg1, "memccpy - arg1");
		validate_NULL_TYPETYPE(  arg2, "memccpy - arg2");
		validate_NULL_TYPETYPE(  arg3, "memccpy - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

