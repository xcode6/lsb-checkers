// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvderwin
static int(*funcptr) (WINDOW * , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int mvderwin (WINDOW * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvderwin");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mvderwin()");
	validate_RWaddress( arg0, "mvderwin - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvderwin - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvderwin - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvderwin - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

