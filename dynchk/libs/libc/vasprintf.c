// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <stdarg.h>
#include <stdio.h>
#undef vasprintf
static int(*funcptr) (char * * , const char * , va_list ) = 0;

extern int __lsb_check_params;
int vasprintf (char * * arg0 , const char * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "vasprintf", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vasprintf()");
		validate_RWaddress( arg0, "vasprintf - arg0");
		validate_NULL_TYPETYPE(  arg0, "vasprintf - arg0");
		validate_Rdaddress( arg1, "vasprintf - arg1");
		validate_NULL_TYPETYPE(  arg1, "vasprintf - arg1");
		validate_NULL_TYPETYPE(  arg2, "vasprintf - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

