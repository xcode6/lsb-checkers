// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef winsertln
static int(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int winsertln (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "winsertln");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "winsertln()");
	validate_RWaddress( arg0, "winsertln - arg0");
		validate_NULL_TYPETYPE(  arg0, "winsertln - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

