// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/types.h>
#include <unistd.h>
#undef seteuid
static int(*funcptr) (uid_t ) = 0;

extern int __lsb_check_params;
int seteuid (uid_t arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "seteuid", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "seteuid()");
		validate_NULL_TYPETYPE(  arg0, "seteuid - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

