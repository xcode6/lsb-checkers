// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef wclear
static int(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
int wclear (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wclear");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wclear()");
		validate_RWaddress( arg0, "wclear - arg0");
		validate_NULL_TYPETYPE(  arg0, "wclear - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

