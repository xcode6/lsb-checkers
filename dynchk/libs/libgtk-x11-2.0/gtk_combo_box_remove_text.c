// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_combo_box_remove_text
static void(*funcptr) (GtkComboBox * , gint ) = 0;

extern int __lsb_check_params;
void gtk_combo_box_remove_text (GtkComboBox * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_combo_box_remove_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_combo_box_remove_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_combo_box_remove_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_combo_box_remove_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_combo_box_remove_text - arg0 (combo_box)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_combo_box_remove_text - arg0 (combo_box)");
		validate_NULL_TYPETYPE(  arg1, "gtk_combo_box_remove_text - arg1 (position)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

