// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#undef gtk_test_find_sibling
static GtkWidget *(*funcptr) (GtkWidget * , GType ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_test_find_sibling (GtkWidget * arg0 , GType arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_test_find_sibling()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_test_find_sibling");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_test_find_sibling. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_test_find_sibling() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_test_find_sibling - arg0 (base_widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_test_find_sibling - arg0 (base_widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_test_find_sibling - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

