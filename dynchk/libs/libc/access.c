// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#undef access
static int(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
int access (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "access", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "access()");
		validate_Rdaddress( arg0, "access - arg0");
		validate_pathname(  arg0, "access - arg0");
		validate_NULL_TYPETYPE(  arg1, "access - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

