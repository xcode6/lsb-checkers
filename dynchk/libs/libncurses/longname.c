// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef longname
static char *(*funcptr) () = 0;

extern int __lsb_check_params;
char * longname ()
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for longname()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "longname");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load longname. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "longname() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

