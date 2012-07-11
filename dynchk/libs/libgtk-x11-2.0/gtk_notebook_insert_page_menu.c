// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_notebook_insert_page_menu
static gint(*funcptr) (GtkNotebook * , GtkWidget * , GtkWidget * , GtkWidget * , gint ) = 0;

extern int __lsb_check_params;
gint gtk_notebook_insert_page_menu (GtkNotebook * arg0 , GtkWidget * arg1 , GtkWidget * arg2 , GtkWidget * arg3 , gint arg4 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_notebook_insert_page_menu()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_notebook_insert_page_menu");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_notebook_insert_page_menu. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_notebook_insert_page_menu() - validating");
		validate_RWaddress( arg0, "gtk_notebook_insert_page_menu - arg0 (notebook)");
		validate_NULL_TYPETYPE(  arg0, "gtk_notebook_insert_page_menu - arg0 (notebook)");
		validate_RWaddress( arg1, "gtk_notebook_insert_page_menu - arg1 (child)");
		validate_NULL_TYPETYPE(  arg1, "gtk_notebook_insert_page_menu - arg1 (child)");
		validate_RWaddress( arg2, "gtk_notebook_insert_page_menu - arg2 (tab_label)");
		validate_NULL_TYPETYPE(  arg2, "gtk_notebook_insert_page_menu - arg2 (tab_label)");
		validate_RWaddress( arg3, "gtk_notebook_insert_page_menu - arg3 (menu_label)");
		validate_NULL_TYPETYPE(  arg3, "gtk_notebook_insert_page_menu - arg3 (menu_label)");
		validate_NULL_TYPETYPE(  arg4, "gtk_notebook_insert_page_menu - arg4 (position)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}
