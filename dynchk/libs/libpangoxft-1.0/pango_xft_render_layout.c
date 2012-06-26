// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft.h>
#include <X11/Xft/Xft.h>
#include <pango-1.0/pango/pango.h>
#undef pango_xft_render_layout
static void(*funcptr) (XftDraw * , XftColor * , PangoLayout * , int , int ) = 0;

extern int __lsb_check_params;
void pango_xft_render_layout (XftDraw * arg0 , XftColor * arg1 , PangoLayout * arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_xft_render_layout()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_xft_render_layout");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_xft_render_layout. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_xft_render_layout() - validating");
		validate_RWaddress( arg0, "pango_xft_render_layout - arg0 (draw)");
		validate_NULL_TYPETYPE(  arg0, "pango_xft_render_layout - arg0 (draw)");
		validate_RWaddress( arg1, "pango_xft_render_layout - arg1 (color)");
		validate_NULL_TYPETYPE(  arg1, "pango_xft_render_layout - arg1 (color)");
		validate_RWaddress( arg2, "pango_xft_render_layout - arg2 (layout)");
		validate_NULL_TYPETYPE(  arg2, "pango_xft_render_layout - arg2 (layout)");
		validate_NULL_TYPETYPE(  arg3, "pango_xft_render_layout - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "pango_xft_render_layout - arg4 (y)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

