// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef brk
static int(*funcptr) (void * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int brk (void * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "brk");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "brk()");
	validate_RWaddress( arg0, "brk - arg0");
		validate_NULL_TYPETYPE(  arg0, "brk - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

