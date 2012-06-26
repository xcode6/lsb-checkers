// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_fill_extents
static void(*funcptr) (cairo_t * , double * , double * , double * , double * ) = 0;

extern int __lsb_check_params;
void cairo_fill_extents (cairo_t * arg0 , double * arg1 , double * arg2 , double * arg3 , double * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_fill_extents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_fill_extents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_fill_extents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_fill_extents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_fill_extents - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_fill_extents - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_fill_extents - arg1 (x1)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_fill_extents - arg1 (x1)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_fill_extents - arg2 (y1)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_fill_extents - arg2 (y1)");
		if( arg3 ) {
		validate_RWaddress( arg3, "cairo_fill_extents - arg3 (x2)");
		}
		validate_NULL_TYPETYPE(  arg3, "cairo_fill_extents - arg3 (x2)");
		if( arg4 ) {
		validate_RWaddress( arg4, "cairo_fill_extents - arg4 (y2)");
		}
		validate_NULL_TYPETYPE(  arg4, "cairo_fill_extents - arg4 (y2)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

