// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef attr_on
static int(*funcptr) (attr_t , void * ) = 0;

extern int __lsb_check_params;
int attr_on (attr_t arg0 , void * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "attr_on");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "attr_on()");
		validate_NULL_TYPETYPE(  arg0, "attr_on - arg0");
		validate_RWaddress( arg1, "attr_on - arg1");
		validate_NULL_TYPETYPE(  arg1, "attr_on - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

