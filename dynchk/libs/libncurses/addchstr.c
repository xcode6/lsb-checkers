// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef addchstr
static int(*funcptr) (const chtype * ) = 0;

extern int __lsb_check_params;
int addchstr (const chtype * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "addchstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "addchstr()");
		validate_Rdaddress( arg0, "addchstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "addchstr - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

