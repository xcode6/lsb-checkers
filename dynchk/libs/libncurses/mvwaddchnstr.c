// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvwaddchnstr
static int(*funcptr) (WINDOW * , int , int , const chtype * , int ) = 0;

extern int __lsb_check_params;
int mvwaddchnstr (WINDOW * arg0 , int arg1 , int arg2 , const chtype * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvwaddchnstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwaddchnstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvwaddchnstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwaddchnstr() - validating");
		validate_RWaddress( arg0, "mvwaddchnstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwaddchnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwaddchnstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwaddchnstr - arg2");
		validate_Rdaddress( arg3, "mvwaddchnstr - arg3");
		validate_NULL_TYPETYPE(  arg3, "mvwaddchnstr - arg3");
		validate_NULL_TYPETYPE(  arg4, "mvwaddchnstr - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

