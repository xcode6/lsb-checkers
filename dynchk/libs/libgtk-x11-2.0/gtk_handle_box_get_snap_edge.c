// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_handle_box_get_snap_edge
static GtkPositionType(*funcptr) (GtkHandleBox * ) = 0;

extern int __lsb_check_params;
GtkPositionType gtk_handle_box_get_snap_edge (GtkHandleBox * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkPositionType ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_handle_box_get_snap_edge()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_handle_box_get_snap_edge");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_handle_box_get_snap_edge. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_handle_box_get_snap_edge() - validating");
		validate_RWaddress( arg0, "gtk_handle_box_get_snap_edge - arg0 (handle_box)");
		validate_NULL_TYPETYPE(  arg0, "gtk_handle_box_get_snap_edge - arg0 (handle_box)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

