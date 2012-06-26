// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xft/Xft.h>
#undef XftDrawCreateBitmap
static XftDraw *(*funcptr) (Display * , Pixmap ) = 0;

extern int __lsb_check_params;
XftDraw * XftDrawCreateBitmap (Display * arg0 , Pixmap arg1 )
{
	int reset_flag = __lsb_check_params;
	XftDraw * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftDrawCreateBitmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawCreateBitmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawCreateBitmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawCreateBitmap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawCreateBitmap - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawCreateBitmap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftDrawCreateBitmap - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

