// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_hscrollbar_new
static GtkWidget *(*funcptr) (GtkAdjustment * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_hscrollbar_new (GtkAdjustment * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_hscrollbar_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_hscrollbar_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_hscrollbar_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_hscrollbar_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_hscrollbar_new - arg0 (adjustment)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_hscrollbar_new - arg0 (adjustment)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

