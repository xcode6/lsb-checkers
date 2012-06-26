// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_handle_box_set_snap_edge
static void(*funcptr) (GtkHandleBox * , GtkPositionType ) = 0;

extern int __lsb_check_params;
void gtk_handle_box_set_snap_edge (GtkHandleBox * arg0 , GtkPositionType arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_handle_box_set_snap_edge()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_handle_box_set_snap_edge");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_handle_box_set_snap_edge. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_handle_box_set_snap_edge() - validating");
		validate_RWaddress( arg0, "gtk_handle_box_set_snap_edge - arg0 (handle_box)");
		validate_NULL_TYPETYPE(  arg0, "gtk_handle_box_set_snap_edge - arg0 (handle_box)");
		validate_NULL_TYPETYPE(  arg1, "gtk_handle_box_set_snap_edge - arg1 (edge)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

