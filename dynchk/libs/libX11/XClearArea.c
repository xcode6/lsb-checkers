// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XClearArea
static int(*funcptr) (Display * , Window , int , int , unsigned int , unsigned int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XClearArea (Display * arg0 , Window arg1 , int arg2 , int arg3 , unsigned int arg4 , unsigned int arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XClearArea");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XClearArea()");
	validate_Rdaddress( arg0, "XClearArea - arg0");
		validate_NULL_TYPETYPE(  arg0, "XClearArea - arg0");
		validate_NULL_TYPETYPE(  arg1, "XClearArea - arg1");
		validate_NULL_TYPETYPE(  arg2, "XClearArea - arg2");
		validate_NULL_TYPETYPE(  arg3, "XClearArea - arg3");
		validate_NULL_TYPETYPE(  arg4, "XClearArea - arg4");
		validate_NULL_TYPETYPE(  arg5, "XClearArea - arg5");
		validate_NULL_TYPETYPE(  arg6, "XClearArea - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

