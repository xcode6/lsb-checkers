// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <sys/types.h>
#include <time.h>
#undef difftime
static double(*funcptr) (time_t , time_t ) = 0;

extern int __lsb_check_params;
double difftime (time_t arg0 , time_t arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "difftime", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "difftime()");
		validate_NULL_TYPETYPE(  arg0, "difftime - arg0");
		validate_NULL_TYPETYPE(  arg1, "difftime - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

