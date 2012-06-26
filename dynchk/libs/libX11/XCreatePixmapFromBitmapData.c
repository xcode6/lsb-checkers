// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XCreatePixmapFromBitmapData
static Pixmap(*funcptr) (Display * , Drawable , char * , unsigned int , unsigned int , unsigned long int , unsigned long int , unsigned int ) = 0;

extern int __lsb_check_params;
Pixmap XCreatePixmapFromBitmapData (Display * arg0 , Drawable arg1 , char * arg2 , unsigned int arg3 , unsigned int arg4 , unsigned long int arg5 , unsigned long int arg6 , unsigned int arg7 )
{
	int reset_flag = __lsb_check_params;
	Pixmap ret_value  ;
	__lsb_output(4, "Invoking wrapper for XCreatePixmapFromBitmapData()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCreatePixmapFromBitmapData");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XCreatePixmapFromBitmapData. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XCreatePixmapFromBitmapData() - validating");
		validate_RWaddress( arg0, "XCreatePixmapFromBitmapData - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCreatePixmapFromBitmapData - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCreatePixmapFromBitmapData - arg1");
		validate_RWaddress( arg2, "XCreatePixmapFromBitmapData - arg2");
		validate_NULL_TYPETYPE(  arg2, "XCreatePixmapFromBitmapData - arg2");
		validate_NULL_TYPETYPE(  arg3, "XCreatePixmapFromBitmapData - arg3");
		validate_NULL_TYPETYPE(  arg4, "XCreatePixmapFromBitmapData - arg4");
		validate_NULL_TYPETYPE(  arg5, "XCreatePixmapFromBitmapData - arg5");
		validate_NULL_TYPETYPE(  arg6, "XCreatePixmapFromBitmapData - arg6");
		validate_NULL_TYPETYPE(  arg7, "XCreatePixmapFromBitmapData - arg7");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

