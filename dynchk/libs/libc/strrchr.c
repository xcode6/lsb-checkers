// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strrchr
static char *(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * strrchr (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strrchr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "strrchr()");
	validate_RWaddress( arg0, "strrchr - arg0");
		validate_NULL_TYPETYPE(  arg0, "strrchr - arg0");
		validate_NULL_TYPETYPE(  arg1, "strrchr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

