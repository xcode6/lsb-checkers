// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvinnstr
static int(*funcptr) (int , int , char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int mvinnstr (int arg0 , int arg1 , char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mvinnstr()");
		validate_NULL_TYPETYPE(  arg0, "mvinnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvinnstr - arg1");
	validate_RWaddress( arg2, "mvinnstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvinnstr - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvinnstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

