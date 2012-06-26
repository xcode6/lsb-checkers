// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_bin_get_child
static GtkWidget *(*funcptr) (GtkBin * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_bin_get_child (GtkBin * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_bin_get_child()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_bin_get_child");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_bin_get_child. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_bin_get_child() - validating");
		validate_RWaddress( arg0, "gtk_bin_get_child - arg0 (bin)");
		validate_NULL_TYPETYPE(  arg0, "gtk_bin_get_child - arg0 (bin)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

