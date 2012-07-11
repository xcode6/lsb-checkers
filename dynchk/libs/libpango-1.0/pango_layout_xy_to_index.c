// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_layout_xy_to_index
static gboolean(*funcptr) (PangoLayout * , int , int , int * , gint * ) = 0;

extern int __lsb_check_params;
gboolean pango_layout_xy_to_index (PangoLayout * arg0 , int arg1 , int arg2 , int * arg3 , gint * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_layout_xy_to_index()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_xy_to_index");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_xy_to_index. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_xy_to_index() - validating");
		validate_RWaddress( arg0, "pango_layout_xy_to_index - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg0, "pango_layout_xy_to_index - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg1, "pango_layout_xy_to_index - arg1 (x)");
		validate_NULL_TYPETYPE(  arg2, "pango_layout_xy_to_index - arg2 (y)");
		validate_RWaddress( arg3, "pango_layout_xy_to_index - arg3 (index_)");
		validate_NULL_TYPETYPE(  arg3, "pango_layout_xy_to_index - arg3 (index_)");
		validate_RWaddress( arg4, "pango_layout_xy_to_index - arg4 (trailing)");
		validate_NULL_TYPETYPE(  arg4, "pango_layout_xy_to_index - arg4 (trailing)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
