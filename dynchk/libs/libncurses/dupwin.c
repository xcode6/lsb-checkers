// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef dupwin
static WINDOW *(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
WINDOW * dupwin (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	WINDOW * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dupwin");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "dupwin()");
	validate_RWaddress( arg0, "dupwin - arg0");
		validate_NULL_TYPETYPE(  arg0, "dupwin - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

