// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef newpad
static WINDOW *(*funcptr) (int , int ) = 0;

extern int __lsb_check_params;
WINDOW * newpad (int arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	WINDOW * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "newpad");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "newpad()");
		validate_NULL_TYPETYPE(  arg0, "newpad - arg0");
		validate_NULL_TYPETYPE(  arg1, "newpad - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

