// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <pango-1.0/pango/pangoxft-render.h>
#undef pango_xft_renderer_new
static PangoRenderer *(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
PangoRenderer * pango_xft_renderer_new (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoRenderer * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_xft_renderer_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_xft_renderer_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_xft_renderer_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_xft_renderer_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_xft_renderer_new - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_xft_renderer_new - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "pango_xft_renderer_new - arg1 (screen)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

