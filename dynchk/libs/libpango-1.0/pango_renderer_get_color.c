// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_renderer_get_color
static PangoColor *(*funcptr) (PangoRenderer * , PangoRenderPart ) = 0;

extern int __lsb_check_params;
PangoColor * pango_renderer_get_color (PangoRenderer * arg0 , PangoRenderPart arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoColor * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_renderer_get_color()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_renderer_get_color");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_renderer_get_color. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_renderer_get_color() - validating");
		validate_RWaddress( arg0, "pango_renderer_get_color - arg0 (renderer)");
		validate_NULL_TYPETYPE(  arg0, "pango_renderer_get_color - arg0 (renderer)");
		validate_NULL_TYPETYPE(  arg1, "pango_renderer_get_color - arg1 (part)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

