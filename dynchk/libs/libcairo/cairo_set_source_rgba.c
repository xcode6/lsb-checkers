// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_set_source_rgba
static void(*funcptr) (cairo_t * , double , double , double , double ) = 0;

extern int __lsb_check_params;
void cairo_set_source_rgba (cairo_t * arg0 , double arg1 , double arg2 , double arg3 , double arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_set_source_rgba()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_set_source_rgba");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_set_source_rgba. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_set_source_rgba() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_set_source_rgba - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_set_source_rgba - arg0 (cr)");
		validate_NULL_TYPETYPE(  arg1, "cairo_set_source_rgba - arg1 (red)");
		validate_NULL_TYPETYPE(  arg2, "cairo_set_source_rgba - arg2 (green)");
		validate_NULL_TYPETYPE(  arg3, "cairo_set_source_rgba - arg3 (blue)");
		validate_NULL_TYPETYPE(  arg4, "cairo_set_source_rgba - arg4 (alpha)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}
