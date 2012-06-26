// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_get_current_point
static void(*funcptr) (cairo_t * , double * , double * ) = 0;

extern int __lsb_check_params;
void cairo_get_current_point (cairo_t * arg0 , double * arg1 , double * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_get_current_point()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_get_current_point");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_get_current_point. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_get_current_point() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_get_current_point - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_get_current_point - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_get_current_point - arg1 (x)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_get_current_point - arg1 (x)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_get_current_point - arg2 (y)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_get_current_point - arg2 (y)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

