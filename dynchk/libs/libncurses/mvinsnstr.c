// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef mvinsnstr
static int(*funcptr) (int , int , const char * , int ) = 0;

extern int __lsb_check_params;
int mvinsnstr (int arg0 , int arg1 , const char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinsnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvinsnstr()");
		validate_NULL_TYPETYPE(  arg0, "mvinsnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvinsnstr - arg1");
		validate_Rdaddress( arg2, "mvinsnstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvinsnstr - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvinsnstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

