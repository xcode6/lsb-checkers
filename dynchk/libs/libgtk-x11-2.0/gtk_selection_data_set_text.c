// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_selection_data_set_text
static gboolean(*funcptr) (GtkSelectionData * , const gchar * , gint ) = 0;

extern int __lsb_check_params;
gboolean gtk_selection_data_set_text (GtkSelectionData * arg0 , const gchar * arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_selection_data_set_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_selection_data_set_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_selection_data_set_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_selection_data_set_text() - validating");
		validate_RWaddress( arg0, "gtk_selection_data_set_text - arg0 (selection_data)");
		validate_NULL_TYPETYPE(  arg0, "gtk_selection_data_set_text - arg0 (selection_data)");
		validate_Rdaddress( arg1, "gtk_selection_data_set_text - arg1 (str)");
		validate_NULL_TYPETYPE(  arg1, "gtk_selection_data_set_text - arg1 (str)");
		validate_NULL_TYPETYPE(  arg2, "gtk_selection_data_set_text - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
