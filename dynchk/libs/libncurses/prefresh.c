// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef prefresh
static int(*funcptr) (WINDOW * , int , int , int , int , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int prefresh (WINDOW * arg0 , int arg1 , int arg2 , int arg3 , int arg4 , int arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "prefresh");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "prefresh()");
	validate_RWaddress( arg0, "prefresh - arg0");
		validate_NULL_TYPETYPE(  arg0, "prefresh - arg0");
		validate_NULL_TYPETYPE(  arg1, "prefresh - arg1");
		validate_NULL_TYPETYPE(  arg2, "prefresh - arg2");
		validate_NULL_TYPETYPE(  arg3, "prefresh - arg3");
		validate_NULL_TYPETYPE(  arg4, "prefresh - arg4");
		validate_NULL_TYPETYPE(  arg5, "prefresh - arg5");
		validate_NULL_TYPETYPE(  arg6, "prefresh - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

