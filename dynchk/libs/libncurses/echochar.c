// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef echochar
static int(*funcptr) (const chtype ) = 0;

extern int __lsb_check_params;
int echochar (const chtype arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "echochar");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "echochar()");
		validate_NULL_TYPETYPE(  arg0, "echochar - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

