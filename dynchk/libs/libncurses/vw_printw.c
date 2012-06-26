// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#include <stdarg.h>
#undef vw_printw
static int(*funcptr) (WINDOW * , const char * , va_list ) = 0;

extern int __lsb_check_params;
int vw_printw (WINDOW * arg0 , const char * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for vw_printw()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vw_printw");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load vw_printw. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vw_printw() - validating");
		validate_RWaddress( arg0, "vw_printw - arg0");
		validate_NULL_TYPETYPE(  arg0, "vw_printw - arg0");
		validate_Rdaddress( arg1, "vw_printw - arg1");
		validate_NULL_TYPETYPE(  arg1, "vw_printw - arg1");
		validate_NULL_TYPETYPE(  arg2, "vw_printw - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

