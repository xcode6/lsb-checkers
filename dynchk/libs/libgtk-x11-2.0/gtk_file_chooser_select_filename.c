// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_file_chooser_select_filename
static gboolean(*funcptr) (GtkFileChooser * , const gchar * ) = 0;

extern int __lsb_check_params;
gboolean gtk_file_chooser_select_filename (GtkFileChooser * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_file_chooser_select_filename()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_file_chooser_select_filename");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_file_chooser_select_filename. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_file_chooser_select_filename() - validating");
		validate_RWaddress( arg0, "gtk_file_chooser_select_filename - arg0 (chooser)");
		validate_NULL_TYPETYPE(  arg0, "gtk_file_chooser_select_filename - arg0 (chooser)");
		validate_Rdaddress( arg1, "gtk_file_chooser_select_filename - arg1 (filename)");
		validate_NULL_TYPETYPE(  arg1, "gtk_file_chooser_select_filename - arg1 (filename)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

