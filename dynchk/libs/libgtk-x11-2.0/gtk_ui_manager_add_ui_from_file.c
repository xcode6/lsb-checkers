// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_ui_manager_add_ui_from_file
static guint(*funcptr) (GtkUIManager * , const gchar * , GError * * ) = 0;

extern int __lsb_check_params;
guint gtk_ui_manager_add_ui_from_file (GtkUIManager * arg0 , const gchar * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_ui_manager_add_ui_from_file()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_ui_manager_add_ui_from_file");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_ui_manager_add_ui_from_file. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_ui_manager_add_ui_from_file() - validating");
		validate_RWaddress( arg0, "gtk_ui_manager_add_ui_from_file - arg0 (self)");
		validate_NULL_TYPETYPE(  arg0, "gtk_ui_manager_add_ui_from_file - arg0 (self)");
		validate_Rdaddress( arg1, "gtk_ui_manager_add_ui_from_file - arg1 (filename)");
		validate_NULL_TYPETYPE(  arg1, "gtk_ui_manager_add_ui_from_file - arg1 (filename)");
		validate_RWaddress( arg2, "gtk_ui_manager_add_ui_from_file - arg2 (error)");
		validate_NULL_TYPETYPE(  arg2, "gtk_ui_manager_add_ui_from_file - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

