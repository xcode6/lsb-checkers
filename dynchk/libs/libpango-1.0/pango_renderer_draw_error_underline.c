// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_renderer_draw_error_underline
static void(*funcptr) (PangoRenderer * , int , int , int , int ) = 0;

extern int __lsb_check_params;
void pango_renderer_draw_error_underline (PangoRenderer * arg0 , int arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_renderer_draw_error_underline()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_renderer_draw_error_underline");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_renderer_draw_error_underline. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_renderer_draw_error_underline() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_renderer_draw_error_underline - arg0 (renderer)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_renderer_draw_error_underline - arg0 (renderer)");
		validate_NULL_TYPETYPE(  arg1, "pango_renderer_draw_error_underline - arg1 (x)");
		validate_NULL_TYPETYPE(  arg2, "pango_renderer_draw_error_underline - arg2 (y)");
		validate_NULL_TYPETYPE(  arg3, "pango_renderer_draw_error_underline - arg3 (width)");
		validate_NULL_TYPETYPE(  arg4, "pango_renderer_draw_error_underline - arg4 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

