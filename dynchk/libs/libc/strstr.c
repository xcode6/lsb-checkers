// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <string.h>
#undef strstr
static char *(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
char * strstr (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "strstr", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strstr()");
		validate_RWaddress( arg0, "strstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "strstr - arg0");
		validate_RWaddress( arg1, "strstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "strstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

