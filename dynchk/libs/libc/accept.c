// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/socket.h>
#undef accept
static int(*funcptr) (int , struct sockaddr * , socklen_t * ) = 0;

extern int __lsb_check_params;
int accept (int arg0 , struct sockaddr * arg1 , socklen_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "accept", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "accept()");
		validate_filedescriptor(  arg0, "accept - arg0");
		validate_RWaddress( arg1, "accept - arg1");
		validate_RWaddress(  arg1, "accept - arg1");
		validate_RWaddress( arg2, "accept - arg2");
		validate_RWaddress(  arg2, "accept - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

