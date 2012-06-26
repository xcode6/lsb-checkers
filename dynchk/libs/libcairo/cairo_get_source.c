// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_get_source
static cairo_pattern_t *(*funcptr) (cairo_t * ) = 0;

extern int __lsb_check_params;
cairo_pattern_t * cairo_get_source (cairo_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	cairo_pattern_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_get_source()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_get_source");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_get_source. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_get_source() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_get_source - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_get_source - arg0 (cr)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

