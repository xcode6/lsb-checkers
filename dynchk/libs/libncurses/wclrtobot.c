// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef wclrtobot
static int(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
int wclrtobot (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wclrtobot");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wclrtobot()");
		validate_RWaddress( arg0, "wclrtobot - arg0");
		validate_NULL_TYPETYPE(  arg0, "wclrtobot - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

