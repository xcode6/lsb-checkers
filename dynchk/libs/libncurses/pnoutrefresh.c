// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef pnoutrefresh
static int(*funcptr) (WINDOW * , int , int , int , int , int , int ) = 0;

extern int __lsb_check_params;
int pnoutrefresh (WINDOW * arg0 , int arg1 , int arg2 , int arg3 , int arg4 , int arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pnoutrefresh");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pnoutrefresh()");
		validate_RWaddress( arg0, "pnoutrefresh - arg0");
		validate_NULL_TYPETYPE(  arg0, "pnoutrefresh - arg0");
		validate_NULL_TYPETYPE(  arg1, "pnoutrefresh - arg1");
		validate_NULL_TYPETYPE(  arg2, "pnoutrefresh - arg2");
		validate_NULL_TYPETYPE(  arg3, "pnoutrefresh - arg3");
		validate_NULL_TYPETYPE(  arg4, "pnoutrefresh - arg4");
		validate_NULL_TYPETYPE(  arg5, "pnoutrefresh - arg5");
		validate_NULL_TYPETYPE(  arg6, "pnoutrefresh - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

