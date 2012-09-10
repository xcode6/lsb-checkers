// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <pango-1.0/pango/pangoxft.h>
#undef pango_xft_get_context
static PangoContext *(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
PangoContext * pango_xft_get_context (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoContext * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_xft_get_context()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_xft_get_context");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_xft_get_context. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_xft_get_context() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_xft_get_context - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_xft_get_context - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "pango_xft_get_context - arg1 (screen)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

