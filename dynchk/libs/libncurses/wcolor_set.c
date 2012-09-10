// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef wcolor_set
static int(*funcptr) (WINDOW * , short , void * ) = 0;

extern int __lsb_check_params;
int wcolor_set (WINDOW * arg0 , short arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for wcolor_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcolor_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wcolor_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcolor_set() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "wcolor_set - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "wcolor_set - arg0");
		validate_NULL_TYPETYPE(  arg1, "wcolor_set - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "wcolor_set - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "wcolor_set - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

