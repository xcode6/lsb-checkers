// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_drag_source_set
static void(*funcptr) (GtkWidget * , GdkModifierType , const GtkTargetEntry * , gint , GdkDragAction ) = 0;

extern int __lsb_check_params;
void gtk_drag_source_set (GtkWidget * arg0 , GdkModifierType arg1 , const GtkTargetEntry * arg2 , gint arg3 , GdkDragAction arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_drag_source_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_drag_source_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_drag_source_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_drag_source_set() - validating");
		validate_RWaddress( arg0, "gtk_drag_source_set - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg0, "gtk_drag_source_set - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_drag_source_set - arg1 (start_button_mask)");
		validate_Rdaddress( arg2, "gtk_drag_source_set - arg2 (targets)");
		validate_NULL_TYPETYPE(  arg2, "gtk_drag_source_set - arg2 (targets)");
		validate_NULL_TYPETYPE(  arg3, "gtk_drag_source_set - arg3 (n_targets)");
		validate_NULL_TYPETYPE(  arg4, "gtk_drag_source_set - arg4 (actions)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

