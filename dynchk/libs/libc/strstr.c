// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strstr
static char *(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * strstr (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "strstr()");
	validate_RWaddress( arg0, "strstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "strstr - arg0");
	validate_RWaddress( arg1, "strstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "strstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

