// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <unistd.h>
#undef fpathconf
static long(*funcptr) (int , int ) = 0;

extern int __lsb_check_params;
long fpathconf (int arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	long ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "fpathconf", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fpathconf()");
		validate_NULL_TYPETYPE(  arg0, "fpathconf - arg0");
		validate_NULL_TYPETYPE(  arg1, "fpathconf - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

