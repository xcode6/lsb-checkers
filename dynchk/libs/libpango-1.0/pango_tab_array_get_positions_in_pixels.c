// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_tab_array_get_positions_in_pixels
static gboolean(*funcptr) (PangoTabArray * ) = 0;

extern int __lsb_check_params;
gboolean pango_tab_array_get_positions_in_pixels (PangoTabArray * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_tab_array_get_positions_in_pixels()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_tab_array_get_positions_in_pixels");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_tab_array_get_positions_in_pixels. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_tab_array_get_positions_in_pixels() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_tab_array_get_positions_in_pixels - arg0 (tab_array)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_tab_array_get_positions_in_pixels - arg0 (tab_array)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

