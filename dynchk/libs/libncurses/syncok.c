// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef syncok
static int(*funcptr) (WINDOW * , bool ) = 0;

extern int __lsb_check_params;
int syncok (WINDOW * arg0 , bool arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "syncok");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "syncok()");
		validate_RWaddress( arg0, "syncok - arg0");
		validate_NULL_TYPETYPE(  arg0, "syncok - arg0");
		validate_NULL_TYPETYPE(  arg1, "syncok - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

