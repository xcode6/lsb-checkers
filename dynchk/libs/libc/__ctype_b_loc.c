// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef __ctype_b_loc
static const unsigned short * *(*funcptr) () = 0;

extern int __lsb_check_params;
const unsigned short * * __ctype_b_loc ()
{
	int reset_flag = __lsb_check_params;
	const unsigned short * * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__ctype_b_loc");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

