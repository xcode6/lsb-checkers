// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvinchstr
static int(*funcptr) (int , int , chtype * ) = 0;

extern int __lsb_check_params;
int mvinchstr (int arg0 , int arg1 , chtype * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvinchstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinchstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvinchstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvinchstr() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvinchstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvinchstr - arg1");
		validate_RWaddress( arg2, "mvinchstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvinchstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

