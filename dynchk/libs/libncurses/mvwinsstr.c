// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef mvwinsstr
static int(*funcptr) (WINDOW * , int , int , const char * ) = 0;

extern int __lsb_check_params;
int mvwinsstr (WINDOW * arg0 , int arg1 , int arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "mvwinsstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwinsstr()");
		validate_RWaddress( arg0, "mvwinsstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwinsstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwinsstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwinsstr - arg2");
		validate_Rdaddress( arg3, "mvwinsstr - arg3");
		validate_NULL_TYPETYPE(  arg3, "mvwinsstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

