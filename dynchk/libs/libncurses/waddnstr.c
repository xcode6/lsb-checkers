// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef waddnstr
static int(*funcptr) (WINDOW * , const char * , int ) = 0;

extern int __lsb_check_params;
int waddnstr (WINDOW * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "waddnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "waddnstr()");
		validate_RWaddress( arg0, "waddnstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "waddnstr - arg0");
		validate_Rdaddress( arg1, "waddnstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "waddnstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "waddnstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

