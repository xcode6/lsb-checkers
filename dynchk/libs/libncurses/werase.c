// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef werase
static int(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
int werase (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for werase()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "werase");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load werase. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "werase() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "werase - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "werase - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

