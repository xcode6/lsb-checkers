// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef init_color
static int(*funcptr) (short , short , short , short ) = 0;

extern int __lsb_check_params;
int init_color (short arg0 , short arg1 , short arg2 , short arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "init_color");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "init_color()");
		validate_NULL_TYPETYPE(  arg0, "init_color - arg0");
		validate_NULL_TYPETYPE(  arg1, "init_color - arg1");
		validate_NULL_TYPETYPE(  arg2, "init_color - arg2");
		validate_NULL_TYPETYPE(  arg3, "init_color - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

