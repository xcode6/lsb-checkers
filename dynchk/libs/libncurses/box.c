// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef box
static int(*funcptr) (WINDOW * , chtype , chtype ) = 0;

extern int __lsb_check_params;
int box (WINDOW * arg0 , chtype arg1 , chtype arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for box()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "box");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load box. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "box() - validating");
		validate_RWaddress( arg0, "box - arg0");
		validate_NULL_TYPETYPE(  arg0, "box - arg0");
		validate_NULL_TYPETYPE(  arg1, "box - arg1");
		validate_NULL_TYPETYPE(  arg2, "box - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

