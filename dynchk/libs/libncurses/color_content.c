// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef color_content
static int(*funcptr) (short , short * , short * , short * ) = 0;

extern int __lsb_check_params;
int color_content (short arg0 , short * arg1 , short * arg2 , short * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "color_content");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "color_content()");
		validate_NULL_TYPETYPE(  arg0, "color_content - arg0");
		validate_RWaddress( arg1, "color_content - arg1");
		validate_NULL_TYPETYPE(  arg1, "color_content - arg1");
		validate_RWaddress( arg2, "color_content - arg2");
		validate_NULL_TYPETYPE(  arg2, "color_content - arg2");
		validate_RWaddress( arg3, "color_content - arg3");
		validate_NULL_TYPETYPE(  arg3, "color_content - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

