// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_font_options_set_subpixel_order
static void(*funcptr) (cairo_font_options_t * , cairo_subpixel_order_t ) = 0;

extern int __lsb_check_params;
void cairo_font_options_set_subpixel_order (cairo_font_options_t * arg0 , cairo_subpixel_order_t arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_font_options_set_subpixel_order()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_font_options_set_subpixel_order");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_font_options_set_subpixel_order. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_font_options_set_subpixel_order() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_font_options_set_subpixel_order - arg0 (options)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_font_options_set_subpixel_order - arg0 (options)");
		validate_NULL_TYPETYPE(  arg1, "cairo_font_options_set_subpixel_order - arg1 (subpixel_order)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

