// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_notebook_set_menu_label_text
static void(*funcptr) (GtkNotebook * , GtkWidget * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_notebook_set_menu_label_text (GtkNotebook * arg0 , GtkWidget * arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_notebook_set_menu_label_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_notebook_set_menu_label_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_notebook_set_menu_label_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_notebook_set_menu_label_text() - validating");
		validate_RWaddress( arg0, "gtk_notebook_set_menu_label_text - arg0 (notebook)");
		validate_NULL_TYPETYPE(  arg0, "gtk_notebook_set_menu_label_text - arg0 (notebook)");
		validate_RWaddress( arg1, "gtk_notebook_set_menu_label_text - arg1 (child)");
		validate_NULL_TYPETYPE(  arg1, "gtk_notebook_set_menu_label_text - arg1 (child)");
		validate_Rdaddress( arg2, "gtk_notebook_set_menu_label_text - arg2 (menu_text)");
		validate_NULL_TYPETYPE(  arg2, "gtk_notebook_set_menu_label_text - arg2 (menu_text)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

