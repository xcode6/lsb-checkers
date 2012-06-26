// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_notebook_get_menu_label
static GtkWidget *(*funcptr) (GtkNotebook * , GtkWidget * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_notebook_get_menu_label (GtkNotebook * arg0 , GtkWidget * arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_notebook_get_menu_label()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_notebook_get_menu_label");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_notebook_get_menu_label. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_notebook_get_menu_label() - validating");
		validate_RWaddress( arg0, "gtk_notebook_get_menu_label - arg0 (notebook)");
		validate_NULL_TYPETYPE(  arg0, "gtk_notebook_get_menu_label - arg0 (notebook)");
		validate_RWaddress( arg1, "gtk_notebook_get_menu_label - arg1 (child)");
		validate_NULL_TYPETYPE(  arg1, "gtk_notebook_get_menu_label - arg1 (child)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

