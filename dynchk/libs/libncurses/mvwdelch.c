// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwdelch
static int(*funcptr) (WINDOW * , int , int ) = 0;

extern int __lsb_check_params;
int mvwdelch (WINDOW * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwdelch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwdelch()");
		validate_RWaddress( arg0, "mvwdelch - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwdelch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwdelch - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwdelch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

