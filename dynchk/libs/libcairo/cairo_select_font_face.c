// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_select_font_face
static void(*funcptr) (cairo_t * , const char * , cairo_font_slant_t , cairo_font_weight_t ) = 0;

extern int __lsb_check_params;
void cairo_select_font_face (cairo_t * arg0 , const char * arg1 , cairo_font_slant_t arg2 , cairo_font_weight_t arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_select_font_face()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_select_font_face");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_select_font_face. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_select_font_face() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_select_font_face - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_select_font_face - arg0 (cr)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_select_font_face - arg1 (family)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_select_font_face - arg1 (family)");
		validate_NULL_TYPETYPE(  arg2, "cairo_select_font_face - arg2 (slant)");
		validate_NULL_TYPETYPE(  arg3, "cairo_select_font_face - arg3 (weight)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
