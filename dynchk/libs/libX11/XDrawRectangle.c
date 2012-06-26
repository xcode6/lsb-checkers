// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XDrawRectangle
static int(*funcptr) (Display * , Drawable , GC , int , int , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
int XDrawRectangle (Display * arg0 , Drawable arg1 , GC arg2 , int arg3 , int arg4 , unsigned int arg5 , unsigned int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XDrawRectangle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawRectangle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XDrawRectangle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDrawRectangle() - validating");
		validate_RWaddress( arg0, "XDrawRectangle - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDrawRectangle - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDrawRectangle - arg1");
		validate_NULL_TYPETYPE(  arg2, "XDrawRectangle - arg2");
		validate_NULL_TYPETYPE(  arg3, "XDrawRectangle - arg3");
		validate_NULL_TYPETYPE(  arg4, "XDrawRectangle - arg4");
		validate_NULL_TYPETYPE(  arg5, "XDrawRectangle - arg5");
		validate_NULL_TYPETYPE(  arg6, "XDrawRectangle - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

