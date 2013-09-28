// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef in_wchstr
static int(*funcptr) (cchar_t * ) = 0;

extern int __lsb_check_params;
int in_wchstr (cchar_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for in_wchstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "in_wchstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load in_wchstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "in_wchstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "in_wchstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "in_wchstr - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
