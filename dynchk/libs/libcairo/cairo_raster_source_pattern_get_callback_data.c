// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_raster_source_pattern_get_callback_data
static void *(*funcptr) (cairo_pattern_t * ) = 0;

extern int __lsb_check_params;
void * cairo_raster_source_pattern_get_callback_data (cairo_pattern_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_raster_source_pattern_get_callback_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_raster_source_pattern_get_callback_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_raster_source_pattern_get_callback_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_raster_source_pattern_get_callback_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_raster_source_pattern_get_callback_data - arg0 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_raster_source_pattern_get_callback_data - arg0 (pattern)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
