// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef delscreen
static void(*funcptr) (SCREEN * ) = 0;

extern int __lsb_check_params;
void delscreen (SCREEN * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "delscreen");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "delscreen()");
		validate_RWaddress( arg0, "delscreen - arg0");
		validate_NULL_TYPETYPE(  arg0, "delscreen - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

