// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <time.h>
#undef ctime_r
static char *(*funcptr) (const time_t * , char * ) = 0;

extern int __lsb_check_params;
char * ctime_r (const time_t * arg0 , char * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctime_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "ctime_r()");
		validate_Rdaddress( arg0, "ctime_r - arg0");
		validate_NULL_TYPETYPE(  arg0, "ctime_r - arg0");
		validate_RWaddress( arg1, "ctime_r - arg1");
		validate_RWaddress(  arg1, "ctime_r - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

