// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef has_colors
static bool(*funcptr) () = 0;

extern int __lsb_check_params;
bool has_colors ()
{
	int reset_flag = __lsb_check_params;
	bool ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "has_colors");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "has_colors()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

