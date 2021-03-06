// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_mesh_pattern_get_control_point
static cairo_status_t(*funcptr) (cairo_pattern_t * , unsigned int , unsigned int , double * , double * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_mesh_pattern_get_control_point (cairo_pattern_t * arg0 , unsigned int arg1 , unsigned int arg2 , double * arg3 , double * arg4 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_mesh_pattern_get_control_point()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_mesh_pattern_get_control_point");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_mesh_pattern_get_control_point. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_mesh_pattern_get_control_point() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_mesh_pattern_get_control_point - arg0 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_mesh_pattern_get_control_point - arg0 (pattern)");
		validate_NULL_TYPETYPE(  arg1, "cairo_mesh_pattern_get_control_point - arg1 (patch_num)");
		validate_NULL_TYPETYPE(  arg2, "cairo_mesh_pattern_get_control_point - arg2 (point_num)");
		if( arg3 ) {
		validate_RWaddress( arg3, "cairo_mesh_pattern_get_control_point - arg3 (x)");
		}
		validate_NULL_TYPETYPE(  arg3, "cairo_mesh_pattern_get_control_point - arg3 (x)");
		if( arg4 ) {
		validate_RWaddress( arg4, "cairo_mesh_pattern_get_control_point - arg4 (y)");
		}
		validate_NULL_TYPETYPE(  arg4, "cairo_mesh_pattern_get_control_point - arg4 (y)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

