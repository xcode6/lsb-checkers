// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef winsch
static int(*funcptr) (WINDOW * , chtype ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int winsch (WINDOW * arg0 , chtype arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "winsch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "winsch()");
	validate_RWaddress( arg0, "winsch - arg0");
		validate_NULL_TYPETYPE(  arg0, "winsch - arg0");
		validate_NULL_TYPETYPE(  arg1, "winsch - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

