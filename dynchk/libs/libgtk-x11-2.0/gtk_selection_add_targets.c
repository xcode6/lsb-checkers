// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_selection_add_targets
static void(*funcptr) (GtkWidget * , GdkAtom , const GtkTargetEntry * , guint ) = 0;

extern int __lsb_check_params;
void gtk_selection_add_targets (GtkWidget * arg0 , GdkAtom arg1 , const GtkTargetEntry * arg2 , guint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_selection_add_targets()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_selection_add_targets");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_selection_add_targets. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_selection_add_targets() - validating");
		validate_RWaddress( arg0, "gtk_selection_add_targets - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg0, "gtk_selection_add_targets - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_selection_add_targets - arg1 (selection)");
		validate_Rdaddress( arg2, "gtk_selection_add_targets - arg2 (targets)");
		validate_NULL_TYPETYPE(  arg2, "gtk_selection_add_targets - arg2 (targets)");
		validate_NULL_TYPETYPE(  arg3, "gtk_selection_add_targets - arg3 (ntargets)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
