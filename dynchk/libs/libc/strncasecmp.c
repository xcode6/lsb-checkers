// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stddef.h>
#include <string.h>
#undef strncasecmp
static int(*funcptr) (const char * , const char * , size_t ) = 0;

extern int __lsb_check_params;
int strncasecmp (const char * arg0 , const char * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "strncasecmp", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strncasecmp()");
		validate_RWaddress( arg0, "strncasecmp - arg0");
		validate_NULL_TYPETYPE(  arg0, "strncasecmp - arg0");
		validate_RWaddress( arg1, "strncasecmp - arg1");
		validate_NULL_TYPETYPE(  arg1, "strncasecmp - arg1");
		validate_NULL_TYPETYPE(  arg2, "strncasecmp - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

