// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef can_change_color
static bool(*funcptr) () = 0;

extern int __lsb_check_params;
bool can_change_color ()
{
	int reset_flag = __lsb_check_params;
	bool ret_value  ;
	__lsb_output(4, "Invoking wrapper for can_change_color()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "can_change_color");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load can_change_color. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "can_change_color() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

