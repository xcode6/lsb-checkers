// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef box
static int(*funcptr) (WINDOW * , chtype , chtype ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int box (WINDOW * arg0 , chtype arg1 , chtype arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "box");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "box()");
	validate_RWaddress( arg0, "box - arg0");
		validate_NULL_TYPETYPE(  arg0, "box - arg0");
		validate_NULL_TYPETYPE(  arg1, "box - arg1");
		validate_NULL_TYPETYPE(  arg2, "box - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

