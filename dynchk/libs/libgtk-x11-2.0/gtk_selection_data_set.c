// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gtk_selection_data_set
static void(*funcptr) (GtkSelectionData * , GdkAtom , gint , const guchar * , gint ) = 0;

extern int __lsb_check_params;
void gtk_selection_data_set (GtkSelectionData * arg0 , GdkAtom arg1 , gint arg2 , const guchar * arg3 , gint arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_selection_data_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_selection_data_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_selection_data_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_selection_data_set() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_selection_data_set - arg0 (selection_data)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_selection_data_set - arg0 (selection_data)");
		validate_NULL_TYPETYPE(  arg1, "gtk_selection_data_set - arg1 (type)");
		validate_NULL_TYPETYPE(  arg2, "gtk_selection_data_set - arg2 (format)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_selection_data_set - arg3 (data)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_selection_data_set - arg3 (data)");
		validate_NULL_TYPETYPE(  arg4, "gtk_selection_data_set - arg4 (length)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

