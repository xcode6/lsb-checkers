// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/stat.h>
#undef umask
static mode_t(*funcptr) (mode_t ) = 0;

extern int __lsb_check_params;
mode_t umask (mode_t arg0 )
{
	int reset_flag = __lsb_check_params;
	mode_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "umask", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "umask()");
		validate_NULL_TYPETYPE(  arg0, "umask - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

