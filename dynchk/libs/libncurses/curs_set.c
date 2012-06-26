// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef curs_set
static int(*funcptr) (int ) = 0;

extern int __lsb_check_params;
int curs_set (int arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for curs_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "curs_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load curs_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "curs_set() - validating");
		validate_NULL_TYPETYPE(  arg0, "curs_set - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

