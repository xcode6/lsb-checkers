// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef wcursyncup
static void(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
void wcursyncup (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcursyncup");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcursyncup()");
		validate_RWaddress( arg0, "wcursyncup - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcursyncup - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

