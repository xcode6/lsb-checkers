// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <regex.h>
#include <stddef.h>
#undef regexec
static int(*funcptr) (const regex_t * , const char * , size_t , regmatch_t [], int ) = 0;

extern int __lsb_check_params;
int regexec (const regex_t * arg0 , const char * arg1 , size_t arg2 , regmatch_t arg3 [], int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regexec");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "regexec - arg0");
		validate_NULL_TYPETYPE(  arg0, "regexec - arg0");
	validate_Rdaddress( arg1, "regexec - arg1");
		validate_NULL_TYPETYPE(  arg1, "regexec - arg1");
		validate_NULL_TYPETYPE(  arg2, "regexec - arg2");
		validate_NULL_TYPETYPE(  arg3, "regexec - arg3");
		validate_NULL_TYPETYPE(  arg4, "regexec - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

