// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/types.h>
#include <unistd.h>
#undef creat64
static int(*funcptr) (const char * , mode_t ) = 0;

extern int __lsb_check_params;
int creat64 (const char * arg0 , mode_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "creat64", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "creat64()");
		validate_Rdaddress( arg0, "creat64 - arg0");
		validate_NULL_TYPETYPE(  arg0, "creat64 - arg0");
		validate_NULL_TYPETYPE(  arg1, "creat64 - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

