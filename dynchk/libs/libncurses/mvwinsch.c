// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwinsch
static int(*funcptr) (WINDOW * , int , int , chtype ) = 0;

extern int __lsb_check_params;
int mvwinsch (WINDOW * arg0 , int arg1 , int arg2 , chtype arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwinsch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwinsch()");
		validate_RWaddress( arg0, "mvwinsch - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwinsch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwinsch - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwinsch - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvwinsch - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

