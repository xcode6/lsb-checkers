// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <stdint.h>
#undef xcb_query_colors_unchecked
static xcb_query_colors_cookie_t(*funcptr) (xcb_connection_t * , xcb_colormap_t , uint32_t , const uint32_t * ) = 0;

extern int __lsb_check_params;
xcb_query_colors_cookie_t xcb_query_colors_unchecked (xcb_connection_t * arg0 , xcb_colormap_t arg1 , uint32_t arg2 , const uint32_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	xcb_query_colors_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_query_colors_unchecked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_query_colors_unchecked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_query_colors_unchecked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_query_colors_unchecked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_query_colors_unchecked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_query_colors_unchecked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_query_colors_unchecked - arg1 (cmap)");
		validate_NULL_TYPETYPE(  arg2, "xcb_query_colors_unchecked - arg2 (pixels_len)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xcb_query_colors_unchecked - arg3 (pixels)");
		}
		validate_NULL_TYPETYPE(  arg3, "xcb_query_colors_unchecked - arg3 (pixels)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
