// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_ui_manager_add_ui
static void(*funcptr) (GtkUIManager * , guint , const gchar * , const gchar * , const gchar * , GtkUIManagerItemType , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_ui_manager_add_ui (GtkUIManager * arg0 , guint arg1 , const gchar * arg2 , const gchar * arg3 , const gchar * arg4 , GtkUIManagerItemType arg5 , gboolean arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_ui_manager_add_ui()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_ui_manager_add_ui");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_ui_manager_add_ui. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_ui_manager_add_ui() - validating");
		validate_RWaddress( arg0, "gtk_ui_manager_add_ui - arg0 (self)");
		validate_NULL_TYPETYPE(  arg0, "gtk_ui_manager_add_ui - arg0 (self)");
		validate_NULL_TYPETYPE(  arg1, "gtk_ui_manager_add_ui - arg1 (merge_id)");
		validate_Rdaddress( arg2, "gtk_ui_manager_add_ui - arg2 (path)");
		validate_NULL_TYPETYPE(  arg2, "gtk_ui_manager_add_ui - arg2 (path)");
		validate_Rdaddress( arg3, "gtk_ui_manager_add_ui - arg3 (name)");
		validate_NULL_TYPETYPE(  arg3, "gtk_ui_manager_add_ui - arg3 (name)");
		validate_Rdaddress( arg4, "gtk_ui_manager_add_ui - arg4 (action)");
		validate_NULL_TYPETYPE(  arg4, "gtk_ui_manager_add_ui - arg4 (action)");
		validate_NULL_TYPETYPE(  arg5, "gtk_ui_manager_add_ui - arg5 (type)");
		validate_NULL_TYPETYPE(  arg6, "gtk_ui_manager_add_ui - arg6 (top)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}
