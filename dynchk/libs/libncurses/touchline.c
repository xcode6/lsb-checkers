// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef touchline
static int(*funcptr) (WINDOW * , int , int ) = 0;

extern int __lsb_check_params;
int touchline (WINDOW * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for touchline()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "touchline");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load touchline. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "touchline() - validating");
		validate_RWaddress( arg0, "touchline - arg0");
		validate_NULL_TYPETYPE(  arg0, "touchline - arg0");
		validate_NULL_TYPETYPE(  arg1, "touchline - arg1");
		validate_NULL_TYPETYPE(  arg2, "touchline - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

