// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef subpad
static WINDOW *(*funcptr) (WINDOW * , int , int , int , int ) = 0;

extern int __lsb_check_params;
WINDOW * subpad (WINDOW * arg0 , int arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	WINDOW * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "subpad");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "subpad()");
		validate_RWaddress( arg0, "subpad - arg0");
		validate_NULL_TYPETYPE(  arg0, "subpad - arg0");
		validate_NULL_TYPETYPE(  arg1, "subpad - arg1");
		validate_NULL_TYPETYPE(  arg2, "subpad - arg2");
		validate_NULL_TYPETYPE(  arg3, "subpad - arg3");
		validate_NULL_TYPETYPE(  arg4, "subpad - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

