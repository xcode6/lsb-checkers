// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef mvaddch
static int(*funcptr) (int , int , const chtype ) = 0;

extern int __lsb_check_params;
int mvaddch (int arg0 , int arg1 , const chtype arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "mvaddch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvaddch()");
		validate_NULL_TYPETYPE(  arg0, "mvaddch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvaddch - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvaddch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

