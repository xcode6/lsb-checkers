// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <regex.h>
#include <stddef.h>
#undef regerror
static size_t(*funcptr) (int , const regex_t * , char * , size_t ) = 0;

extern int __lsb_check_params;
size_t regerror (int arg0 , const regex_t * arg1 , char * arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regerror");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "regerror()");
		validate_NULL_TYPETYPE(  arg0, "regerror - arg0");
		validate_Rdaddress( arg1, "regerror - arg1");
		validate_NULL_TYPETYPE(  arg1, "regerror - arg1");
		validate_RWaddress( arg2, "regerror - arg2");
		validate_NULL_TYPETYPE(  arg2, "regerror - arg2");
		validate_NULL_TYPETYPE(  arg3, "regerror - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

