// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft.h>
#include <X11/Xft/Xft.h>
#undef XftDrawVisual
static Visual *(*funcptr) (XftDraw * ) = 0;

extern int __lsb_check_params;
Visual * XftDrawVisual (XftDraw * arg0 )
{
	int reset_flag = __lsb_check_params;
	Visual * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftDrawVisual()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawVisual");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawVisual. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawVisual() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawVisual - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawVisual - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

