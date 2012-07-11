// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_border_copy
static GtkBorder *(*funcptr) (const GtkBorder * ) = 0;

extern int __lsb_check_params;
GtkBorder * gtk_border_copy (const GtkBorder * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkBorder * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_border_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_border_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_border_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_border_copy() - validating");
		validate_Rdaddress( arg0, "gtk_border_copy - arg0 (border_)");
		validate_NULL_TYPETYPE(  arg0, "gtk_border_copy - arg0 (border_)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
