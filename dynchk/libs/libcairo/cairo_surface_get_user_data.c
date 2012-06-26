// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_surface_get_user_data
static void *(*funcptr) (cairo_surface_t * , const cairo_user_data_key_t * ) = 0;

extern int __lsb_check_params;
void * cairo_surface_get_user_data (cairo_surface_t * arg0 , const cairo_user_data_key_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_surface_get_user_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_surface_get_user_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_surface_get_user_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_surface_get_user_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_surface_get_user_data - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_surface_get_user_data - arg0 (surface)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_surface_get_user_data - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_surface_get_user_data - arg1 (key)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

