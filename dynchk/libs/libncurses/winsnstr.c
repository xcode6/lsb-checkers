// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef winsnstr
static int(*funcptr) (WINDOW * , const char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int winsnstr (WINDOW * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "winsnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "winsnstr()");
	validate_RWaddress( arg0, "winsnstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "winsnstr - arg0");
	validate_Rdaddress( arg1, "winsnstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "winsnstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "winsnstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

