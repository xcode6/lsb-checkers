// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef mvwgetnstr
static int(*funcptr) (WINDOW * , int , int , char * , int ) = 0;

extern int __lsb_check_params;
int mvwgetnstr (WINDOW * arg0 , int arg1 , int arg2 , char * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwgetnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwgetnstr()");
		validate_RWaddress( arg0, "mvwgetnstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwgetnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwgetnstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwgetnstr - arg2");
		validate_RWaddress( arg3, "mvwgetnstr - arg3");
		validate_NULL_TYPETYPE(  arg3, "mvwgetnstr - arg3");
		validate_NULL_TYPETYPE(  arg4, "mvwgetnstr - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

