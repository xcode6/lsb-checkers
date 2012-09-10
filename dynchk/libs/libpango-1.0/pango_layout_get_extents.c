// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_get_extents
static void(*funcptr) (PangoLayout * , PangoRectangle * , PangoRectangle * ) = 0;

extern int __lsb_check_params;
void pango_layout_get_extents (PangoLayout * arg0 , PangoRectangle * arg1 , PangoRectangle * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_layout_get_extents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_get_extents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_get_extents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_get_extents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_get_extents - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_get_extents - arg0 (layout)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_layout_get_extents - arg1 (ink_rect)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_layout_get_extents - arg1 (ink_rect)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_layout_get_extents - arg2 (logical_rect)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_layout_get_extents - arg2 (logical_rect)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

