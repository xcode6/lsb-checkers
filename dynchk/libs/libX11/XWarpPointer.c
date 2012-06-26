// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XWarpPointer
static int(*funcptr) (Display * , Window , Window , int , int , unsigned int , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
int XWarpPointer (Display * arg0 , Window arg1 , Window arg2 , int arg3 , int arg4 , unsigned int arg5 , unsigned int arg6 , int arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XWarpPointer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XWarpPointer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XWarpPointer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XWarpPointer() - validating");
		validate_RWaddress( arg0, "XWarpPointer - arg0");
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

