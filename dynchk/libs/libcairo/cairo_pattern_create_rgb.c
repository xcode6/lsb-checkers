// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_pattern_create_rgb
static cairo_pattern_t *(*funcptr) (double , double , double ) = 0;

extern int __lsb_check_params;
cairo_pattern_t * cairo_pattern_create_rgb (double arg0 , double arg1 , double arg2 )
{
	int reset_flag = __lsb_check_params;
	cairo_pattern_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_pattern_create_rgb()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_pattern_create_rgb");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_pattern_create_rgb. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_pattern_create_rgb() - validating");
		validate_NULL_TYPETYPE(  arg0, "cairo_pattern_create_rgb - arg0 (red)");
		validate_NULL_TYPETYPE(  arg1, "cairo_pattern_create_rgb - arg1 (green)");
		validate_NULL_TYPETYPE(  arg2, "cairo_pattern_create_rgb - arg2 (blue)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
