// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/time.h>
#undef gettimeofday
static int(*funcptr) (struct timeval * , struct timezone * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int gettimeofday (struct timeval * arg0 , struct timezone * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gettimeofday");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "gettimeofday()");
	validate_RWaddress( arg0, "gettimeofday - arg0");
		validate_NULL_TYPETYPE(  arg0, "gettimeofday - arg0");
		if( arg1 ) {
	validate_RWaddress( arg1, "gettimeofday - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gettimeofday - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

