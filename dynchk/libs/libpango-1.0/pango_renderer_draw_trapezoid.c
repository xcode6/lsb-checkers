// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_renderer_draw_trapezoid
static void(*funcptr) (PangoRenderer * , PangoRenderPart , double , double , double , double , double , double ) = 0;

extern int __lsb_check_params;
void pango_renderer_draw_trapezoid (PangoRenderer * arg0 , PangoRenderPart arg1 , double arg2 , double arg3 , double arg4 , double arg5 , double arg6 , double arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_renderer_draw_trapezoid()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_renderer_draw_trapezoid");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_renderer_draw_trapezoid. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_renderer_draw_trapezoid() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_renderer_draw_trapezoid - arg0 (renderer)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_renderer_draw_trapezoid - arg0 (renderer)");
		validate_NULL_TYPETYPE(  arg1, "pango_renderer_draw_trapezoid - arg1 (part)");
		validate_NULL_TYPETYPE(  arg2, "pango_renderer_draw_trapezoid - arg2 (y1_)");
		validate_NULL_TYPETYPE(  arg3, "pango_renderer_draw_trapezoid - arg3 (x11)");
		validate_NULL_TYPETYPE(  arg4, "pango_renderer_draw_trapezoid - arg4 (x21)");
		validate_NULL_TYPETYPE(  arg5, "pango_renderer_draw_trapezoid - arg5 (y2)");
		validate_NULL_TYPETYPE(  arg6, "pango_renderer_draw_trapezoid - arg6 (x12)");
		validate_NULL_TYPETYPE(  arg7, "pango_renderer_draw_trapezoid - arg7 (x22)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

