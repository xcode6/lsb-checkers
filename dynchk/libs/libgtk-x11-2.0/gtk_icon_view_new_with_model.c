// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_icon_view_new_with_model
static GtkWidget *(*funcptr) (GtkTreeModel * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_icon_view_new_with_model (GtkTreeModel * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_view_new_with_model()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_view_new_with_model");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_view_new_with_model. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_view_new_with_model() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_view_new_with_model - arg0 (model)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_view_new_with_model - arg0 (model)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

