// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdio.h>
#undef fputs
static int(*funcptr) (const char * , FILE * ) = 0;

extern int __lsb_check_params;
int fputs (const char * arg0 , FILE * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "fputs", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fputs()");
		validate_Rdaddress( arg0, "fputs - arg0");
		validate_NULL_TYPETYPE(  arg0, "fputs - arg0");
		validate_RWaddress( arg1, "fputs - arg1");
		validate_NULL_TYPETYPE(  arg1, "fputs - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

