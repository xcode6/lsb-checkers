// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_matrix_invert
static cairo_status_t(*funcptr) (cairo_matrix_t * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_matrix_invert (cairo_matrix_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_matrix_invert()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_matrix_invert");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_matrix_invert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_matrix_invert() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_matrix_invert - arg0 (matrix)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_matrix_invert - arg0 (matrix)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

