// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#include <search.h>
#undef tsearch
static void *(*funcptr) (const void * , void * * , __compar_fn_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void * tsearch (const void * arg0 , void * * arg1 , __compar_fn_t arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tsearch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "tsearch()");
	validate_Rdaddress( arg0, "tsearch - arg0");
		validate_NULL_TYPETYPE(  arg0, "tsearch - arg0");
	validate_RWaddress( arg1, "tsearch - arg1");
		validate_NULL_TYPETYPE(  arg1, "tsearch - arg1");
		validate_NULL_TYPETYPE(  arg2, "tsearch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

