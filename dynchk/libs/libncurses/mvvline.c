// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef mvvline
static int(*funcptr) (int , int , chtype , int ) = 0;

extern int __lsb_check_params;
int mvvline (int arg0 , int arg1 , chtype arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvvline");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvvline()");
		validate_NULL_TYPETYPE(  arg0, "mvvline - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvvline - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvvline - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvvline - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

