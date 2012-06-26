// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_in_fill
static cairo_bool_t(*funcptr) (cairo_t * , double , double ) = 0;

extern int __lsb_check_params;
cairo_bool_t cairo_in_fill (cairo_t * arg0 , double arg1 , double arg2 )
{
	int reset_flag = __lsb_check_params;
	cairo_bool_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_in_fill()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_in_fill");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_in_fill. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_in_fill() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_in_fill - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_in_fill - arg0 (cr)");
		validate_NULL_TYPETYPE(  arg1, "cairo_in_fill - arg1 (x)");
		validate_NULL_TYPETYPE(  arg2, "cairo_in_fill - arg2 (y)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

