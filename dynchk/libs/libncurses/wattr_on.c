// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wattr_on
static int(*funcptr) (WINDOW * , attr_t , void * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int wattr_on (WINDOW * arg0 , attr_t arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wattr_on");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wattr_on()");
	validate_RWaddress( arg0, "wattr_on - arg0");
		validate_NULL_TYPETYPE(  arg0, "wattr_on - arg0");
		validate_NULL_TYPETYPE(  arg1, "wattr_on - arg1");
	validate_RWaddress( arg2, "wattr_on - arg2");
		validate_NULL_TYPETYPE(  arg2, "wattr_on - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

