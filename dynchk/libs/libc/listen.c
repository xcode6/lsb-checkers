// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/socket.h>
#undef listen
static int(*funcptr) (int , int ) = 0;

extern int __lsb_check_params;
int listen (int arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "listen", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "listen()");
		validate_NULL_TYPETYPE(  arg0, "listen - arg0");
		validate_NULL_TYPETYPE(  arg1, "listen - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

