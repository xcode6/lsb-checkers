// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <stdint.h>
#undef xcb_store_colors
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , xcb_colormap_t , uint32_t , const xcb_coloritem_t * ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_store_colors (xcb_connection_t * arg0 , xcb_colormap_t arg1 , uint32_t arg2 , const xcb_coloritem_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_store_colors()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_store_colors");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_store_colors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_store_colors() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_store_colors - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_store_colors - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_store_colors - arg1 (cmap)");
		validate_NULL_TYPETYPE(  arg2, "xcb_store_colors - arg2 (items_len)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xcb_store_colors - arg3 (items)");
		}
		validate_NULL_TYPETYPE(  arg3, "xcb_store_colors - arg3 (items)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
