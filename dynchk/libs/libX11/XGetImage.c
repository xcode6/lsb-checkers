// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XGetImage
static XImage *(*funcptr) (Display * , Drawable , int , int , unsigned int , unsigned int , unsigned long int , int ) = 0;

extern int __lsb_check_params;
XImage * XGetImage (Display * arg0 , Drawable arg1 , int arg2 , int arg3 , unsigned int arg4 , unsigned int arg5 , unsigned long int arg6 , int arg7 )
{
	int reset_flag = __lsb_check_params;
	XImage * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetImage()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetImage");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetImage. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetImage() - validating");
		validate_RWaddress( arg0, "XGetImage - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetImage - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetImage - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGetImage - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGetImage - arg3");
		validate_NULL_TYPETYPE(  arg4, "XGetImage - arg4");
		validate_NULL_TYPETYPE(  arg5, "XGetImage - arg5");
		validate_NULL_TYPETYPE(  arg6, "XGetImage - arg6");
		validate_NULL_TYPETYPE(  arg7, "XGetImage - arg7");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

