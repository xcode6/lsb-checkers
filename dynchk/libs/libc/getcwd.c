// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stddef.h>
#include <unistd.h>
#undef getcwd
static char *(*funcptr) (char * , size_t ) = 0;

extern int __lsb_check_params;
char * getcwd (char * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "getcwd", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getcwd()");
		validate_RWaddress( arg0, "getcwd - arg0");
		validate_NULL_TYPETYPE(  arg0, "getcwd - arg0");
		validate_NULL_TYPETYPE(  arg1, "getcwd - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

