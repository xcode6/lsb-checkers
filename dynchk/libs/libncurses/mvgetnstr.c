// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvgetnstr
static int(*funcptr) (int , int , char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int mvgetnstr (int arg0 , int arg1 , char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvgetnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mvgetnstr()");
		validate_NULL_TYPETYPE(  arg0, "mvgetnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvgetnstr - arg1");
	validate_RWaddress( arg2, "mvgetnstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvgetnstr - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvgetnstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

