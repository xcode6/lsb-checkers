// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/XShm.h>
#undef XShmGetImage
static int(*funcptr) (Display * , Drawable , XImage * , int , int , unsigned long int ) = 0;

extern int __lsb_check_params;
int XShmGetImage (Display * arg0 , Drawable arg1 , XImage * arg2 , int arg3 , int arg4 , unsigned long int arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XShmGetImage()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShmGetImage");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XShmGetImage. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XShmGetImage() - validating");
		validate_RWaddress( arg0, "XShmGetImage - arg0");
		validate_NULL_TYPETYPE(  arg0, "XShmGetImage - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShmGetImage - arg1");
		validate_RWaddress( arg2, "XShmGetImage - arg2");
		validate_NULL_TYPETYPE(  arg2, "XShmGetImage - arg2");
		validate_NULL_TYPETYPE(  arg3, "XShmGetImage - arg3");
		validate_NULL_TYPETYPE(  arg4, "XShmGetImage - arg4");
		validate_NULL_TYPETYPE(  arg5, "XShmGetImage - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

