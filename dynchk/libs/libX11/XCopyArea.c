// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XCopyArea
static int(*funcptr) (Display * , Drawable , Drawable , GC , int , int , unsigned int , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
int XCopyArea (Display * arg0 , Drawable arg1 , Drawable arg2 , GC arg3 , int arg4 , int arg5 , unsigned int arg6 , unsigned int arg7 , int arg8 , int arg9 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XCopyArea ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XCopyArea()");
		validate_RWaddress( arg0, "XCopyArea - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCopyArea - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCopyArea - arg1");
		validate_NULL_TYPETYPE(  arg2, "XCopyArea - arg2");
		validate_NULL_TYPETYPE(  arg3, "XCopyArea - arg3");
		validate_NULL_TYPETYPE(  arg4, "XCopyArea - arg4");
		validate_NULL_TYPETYPE(  arg5, "XCopyArea - arg5");
		validate_NULL_TYPETYPE(  arg6, "XCopyArea - arg6");
		validate_NULL_TYPETYPE(  arg7, "XCopyArea - arg7");
		validate_NULL_TYPETYPE(  arg8, "XCopyArea - arg8");
		validate_NULL_TYPETYPE(  arg9, "XCopyArea - arg9");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}

