// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XWarpPointer
static int(*funcptr) (Display * , Window , Window , int , int , unsigned int , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XWarpPointer (Display * arg0 , Window arg1 , Window arg2 , int arg3 , int arg4 , unsigned int arg5 , unsigned int arg6 , int arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XWarpPointer");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XWarpPointer()");
	validate_Rdaddress( arg0, "XWarpPointer - arg0");
		validate_NULL_TYPETYPE(  arg0, "XWarpPointer - arg0");
		validate_NULL_TYPETYPE(  arg1, "XWarpPointer - arg1");
		validate_NULL_TYPETYPE(  arg2, "XWarpPointer - arg2");
		validate_NULL_TYPETYPE(  arg3, "XWarpPointer - arg3");
		validate_NULL_TYPETYPE(  arg4, "XWarpPointer - arg4");
		validate_NULL_TYPETYPE(  arg5, "XWarpPointer - arg5");
		validate_NULL_TYPETYPE(  arg6, "XWarpPointer - arg6");
		validate_NULL_TYPETYPE(  arg7, "XWarpPointer - arg7");
		validate_NULL_TYPETYPE(  arg8, "XWarpPointer - arg8");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}

