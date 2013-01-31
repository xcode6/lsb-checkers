// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo-ps.h>
#undef cairo_ps_get_levels
static void(*funcptr) (const cairo_ps_level_t * * , int * ) = 0;

extern int __lsb_check_params;
void cairo_ps_get_levels (const cairo_ps_level_t * * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_ps_get_levels()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_ps_get_levels");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_ps_get_levels. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_ps_get_levels() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_ps_get_levels - arg0 (levels)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_ps_get_levels - arg0 (levels)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_ps_get_levels - arg1 (num_levels)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_ps_get_levels - arg1 (num_levels)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
