// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#undef XRenderParseColor
static int(*funcptr) (Display * , char * , XRenderColor * ) = 0;

extern int __lsb_check_params;
int XRenderParseColor (Display * arg0 , char * arg1 , XRenderColor * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XRenderParseColor()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderParseColor");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderParseColor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderParseColor() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderParseColor - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderParseColor - arg0 (dpy)");
		if( arg1 ) {
		validate_RWaddress( arg1, "XRenderParseColor - arg1 (spec)");
		}
		validate_NULL_TYPETYPE(  arg1, "XRenderParseColor - arg1 (spec)");
		if( arg2 ) {
		validate_RWaddress( arg2, "XRenderParseColor - arg2 (def)");
		}
		validate_NULL_TYPETYPE(  arg2, "XRenderParseColor - arg2 (def)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
