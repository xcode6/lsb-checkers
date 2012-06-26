// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef has_ic
static bool(*funcptr) () = 0;

extern int __lsb_check_params;
bool has_ic ()
{
	int reset_flag = __lsb_check_params;
	bool ret_value  ;
	__lsb_output(4, "Invoking wrapper for has_ic()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "has_ic");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load has_ic. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "has_ic() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

