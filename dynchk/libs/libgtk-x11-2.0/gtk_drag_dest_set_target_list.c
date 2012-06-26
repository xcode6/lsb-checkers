// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_drag_dest_set_target_list
static void(*funcptr) (GtkWidget * , GtkTargetList * ) = 0;

extern int __lsb_check_params;
void gtk_drag_dest_set_target_list (GtkWidget * arg0 , GtkTargetList * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_drag_dest_set_target_list()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_drag_dest_set_target_list");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_drag_dest_set_target_list. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_drag_dest_set_target_list() - validating");
		validate_RWaddress( arg0, "gtk_drag_dest_set_target_list - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg0, "gtk_drag_dest_set_target_list - arg0 (widget)");
		validate_RWaddress( arg1, "gtk_drag_dest_set_target_list - arg1 (target_list)");
		validate_NULL_TYPETYPE(  arg1, "gtk_drag_dest_set_target_list - arg1 (target_list)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

