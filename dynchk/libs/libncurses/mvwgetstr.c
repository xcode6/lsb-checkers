// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwgetstr
static int(*funcptr) (WINDOW * , int , int , char * ) = 0;

extern int __lsb_check_params;
int mvwgetstr (WINDOW * arg0 , int arg1 , int arg2 , char * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwgetstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwgetstr()");
		validate_RWaddress( arg0, "mvwgetstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwgetstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwgetstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwgetstr - arg2");
		validate_RWaddress( arg3, "mvwgetstr - arg3");
		validate_NULL_TYPETYPE(  arg3, "mvwgetstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

