// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef waddchstr
static int(*funcptr) (WINDOW * , const chtype * ) = 0;

extern int __lsb_check_params;
int waddchstr (WINDOW * arg0 , const chtype * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for waddchstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "waddchstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load waddchstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "waddchstr() - validating");
		validate_RWaddress( arg0, "waddchstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "waddchstr - arg0");
		validate_Rdaddress( arg1, "waddchstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "waddchstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

