// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef flushinp
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int flushinp ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for flushinp()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "flushinp");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load flushinp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "flushinp() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

