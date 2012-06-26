// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef winstr
static int(*funcptr) (WINDOW * , char * ) = 0;

extern int __lsb_check_params;
int winstr (WINDOW * arg0 , char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for winstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "winstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load winstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "winstr() - validating");
		validate_RWaddress( arg0, "winstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "winstr - arg0");
		validate_RWaddress( arg1, "winstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "winstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

