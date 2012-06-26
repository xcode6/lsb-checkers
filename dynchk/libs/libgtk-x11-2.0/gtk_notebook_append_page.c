// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_notebook_append_page
static gint(*funcptr) (GtkNotebook * , GtkWidget * , GtkWidget * ) = 0;

extern int __lsb_check_params;
gint gtk_notebook_append_page (GtkNotebook * arg0 , GtkWidget * arg1 , GtkWidget * arg2 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_notebook_append_page()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_notebook_append_page");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_notebook_append_page. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_notebook_append_page() - validating");
		validate_RWaddress( arg0, "gtk_notebook_append_page - arg0 (notebook)");
		validate_NULL_TYPETYPE(  arg0, "gtk_notebook_append_page - arg0 (notebook)");
		validate_RWaddress( arg1, "gtk_notebook_append_page - arg1 (child)");
		validate_NULL_TYPETYPE(  arg1, "gtk_notebook_append_page - arg1 (child)");
		validate_RWaddress( arg2, "gtk_notebook_append_page - arg2 (tab_label)");
		validate_NULL_TYPETYPE(  arg2, "gtk_notebook_append_page - arg2 (tab_label)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

