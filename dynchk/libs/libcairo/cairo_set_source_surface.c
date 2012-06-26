// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_set_source_surface
static void(*funcptr) (cairo_t * , cairo_surface_t * , double , double ) = 0;

extern int __lsb_check_params;
void cairo_set_source_surface (cairo_t * arg0 , cairo_surface_t * arg1 , double arg2 , double arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_set_source_surface()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_set_source_surface");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_set_source_surface. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_set_source_surface() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_set_source_surface - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_set_source_surface - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_set_source_surface - arg1 (surface)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_set_source_surface - arg1 (surface)");
		validate_NULL_TYPETYPE(  arg2, "cairo_set_source_surface - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "cairo_set_source_surface - arg3 (y)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

