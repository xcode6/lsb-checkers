// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef chown
static int(*funcptr) (const char * , uid_t , gid_t ) = 0;

extern int __lsb_check_params;
int chown (const char * arg0 , uid_t arg1 , gid_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "chown");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "chown - arg0");
		validate_NULL_TYPETYPE(  arg0, "chown - arg0");
		validate_NULL_TYPETYPE(  arg1, "chown - arg1");
		validate_NULL_TYPETYPE(  arg2, "chown - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

