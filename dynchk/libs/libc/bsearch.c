// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef bsearch
static void *(*funcptr) (const void * , const void * , size_t , size_t , __compar_fn_t ) = 0;

extern int __lsb_check_params;
void * bsearch (const void * arg0 , const void * arg1 , size_t arg2 , size_t arg3 , __compar_fn_t arg4 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bsearch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "bsearch()");
		validate_Rdaddress( arg0, "bsearch - arg0");
		validate_NULL_TYPETYPE(  arg0, "bsearch - arg0");
		validate_Rdaddress( arg1, "bsearch - arg1");
		validate_NULL_TYPETYPE(  arg1, "bsearch - arg1");
		validate_NULL_TYPETYPE(  arg2, "bsearch - arg2");
		validate_NULL_TYPETYPE(  arg3, "bsearch - arg3");
		validate_NULL_TYPETYPE(  arg4, "bsearch - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

