// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xft/Xft.h>
#undef XftDrawCreateAlpha
static XftDraw *(*funcptr) (Display * , Pixmap , int ) = 0;

extern int __lsb_check_params;
XftDraw * XftDrawCreateAlpha (Display * arg0 , Pixmap arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	XftDraw * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftDrawCreateAlpha()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawCreateAlpha");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawCreateAlpha. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawCreateAlpha() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawCreateAlpha - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawCreateAlpha - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftDrawCreateAlpha - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftDrawCreateAlpha - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
