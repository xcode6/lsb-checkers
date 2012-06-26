// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_file_chooser_button_new_with_backend
static GtkWidget *(*funcptr) (const gchar * , GtkFileChooserAction , const gchar * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_file_chooser_button_new_with_backend (const gchar * arg0 , GtkFileChooserAction arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_file_chooser_button_new_with_backend()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_file_chooser_button_new_with_backend");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_file_chooser_button_new_with_backend. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_file_chooser_button_new_with_backend() - validating");
		validate_Rdaddress( arg0, "gtk_file_chooser_button_new_with_backend - arg0 (title)");
		validate_NULL_TYPETYPE(  arg0, "gtk_file_chooser_button_new_with_backend - arg0 (title)");
		validate_NULL_TYPETYPE(  arg1, "gtk_file_chooser_button_new_with_backend - arg1 (action)");
		validate_Rdaddress( arg2, "gtk_file_chooser_button_new_with_backend - arg2 (backend)");
		validate_NULL_TYPETYPE(  arg2, "gtk_file_chooser_button_new_with_backend - arg2 (backend)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

