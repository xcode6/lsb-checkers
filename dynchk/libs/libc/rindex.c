// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <string.h>
#undef rindex
static char *(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
char * rindex (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "rindex", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "rindex()");
		validate_RWaddress( arg0, "rindex - arg0");
		validate_NULL_TYPETYPE(  arg0, "rindex - arg0");
		validate_NULL_TYPETYPE(  arg1, "rindex - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

