// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <stdint.h>
#undef xcb_poly_fill_arc
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , xcb_drawable_t , xcb_gcontext_t , uint32_t , const xcb_arc_t * ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_poly_fill_arc (xcb_connection_t * arg0 , xcb_drawable_t arg1 , xcb_gcontext_t arg2 , uint32_t arg3 , const xcb_arc_t * arg4 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_poly_fill_arc()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_poly_fill_arc");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_poly_fill_arc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_poly_fill_arc() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_poly_fill_arc - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_poly_fill_arc - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_poly_fill_arc - arg1 (drawable)");
		validate_NULL_TYPETYPE(  arg2, "xcb_poly_fill_arc - arg2 (gc)");
		validate_NULL_TYPETYPE(  arg3, "xcb_poly_fill_arc - arg3 (arcs_len)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xcb_poly_fill_arc - arg4 (arcs)");
		}
		validate_NULL_TYPETYPE(  arg4, "xcb_poly_fill_arc - arg4 (arcs)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
