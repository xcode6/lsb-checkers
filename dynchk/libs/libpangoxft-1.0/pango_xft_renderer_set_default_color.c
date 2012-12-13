// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft-render.h>
#include <pango-1.0/pango/pango.h>
#undef pango_xft_renderer_set_default_color
static void(*funcptr) (PangoXftRenderer * , PangoColor * ) = 0;

extern int __lsb_check_params;
void pango_xft_renderer_set_default_color (PangoXftRenderer * arg0 , PangoColor * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_xft_renderer_set_default_color()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_xft_renderer_set_default_color");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_xft_renderer_set_default_color. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_xft_renderer_set_default_color() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_xft_renderer_set_default_color - arg0 (xftrenderer)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_xft_renderer_set_default_color - arg0 (xftrenderer)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_xft_renderer_set_default_color - arg1 (default_color)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_xft_renderer_set_default_color - arg1 (default_color)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

