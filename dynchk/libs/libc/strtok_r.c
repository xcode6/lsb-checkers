// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <string.h>
#undef strtok_r
static char *(*funcptr) (char * , const char * , char * * ) = 0;

extern int __lsb_check_params;
char * strtok_r (char * arg0 , const char * arg1 , char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtok_r()");
		validate_RWaddress( arg0, "strtok_r - arg0");
		validate_NULL_TYPETYPE(  arg0, "strtok_r - arg0");
		validate_Rdaddress( arg1, "strtok_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "strtok_r - arg1");
		validate_RWaddress( arg2, "strtok_r - arg2");
		validate_NULL_TYPETYPE(  arg2, "strtok_r - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

