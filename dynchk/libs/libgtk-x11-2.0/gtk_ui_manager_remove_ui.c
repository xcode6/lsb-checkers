// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_ui_manager_remove_ui
static void(*funcptr) (GtkUIManager * , guint ) = 0;

extern int __lsb_check_params;
void gtk_ui_manager_remove_ui (GtkUIManager * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_ui_manager_remove_ui()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_ui_manager_remove_ui");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_ui_manager_remove_ui. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_ui_manager_remove_ui() - validating");
		validate_RWaddress( arg0, "gtk_ui_manager_remove_ui - arg0 (self)");
		validate_NULL_TYPETYPE(  arg0, "gtk_ui_manager_remove_ui - arg0 (self)");
		validate_NULL_TYPETYPE(  arg1, "gtk_ui_manager_remove_ui - arg1 (merge_id)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

