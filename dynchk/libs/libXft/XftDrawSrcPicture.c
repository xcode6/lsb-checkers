// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft.h>
#include <X11/Xft/Xft.h>
#undef XftDrawSrcPicture
static Picture(*funcptr) (XftDraw * , const XftColor * ) = 0;

extern int __lsb_check_params;
Picture XftDrawSrcPicture (XftDraw * arg0 , const XftColor * arg1 )
{
	int reset_flag = __lsb_check_params;
	Picture ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftDrawSrcPicture()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawSrcPicture");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawSrcPicture. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawSrcPicture() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawSrcPicture - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawSrcPicture - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XftDrawSrcPicture - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftDrawSrcPicture - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

