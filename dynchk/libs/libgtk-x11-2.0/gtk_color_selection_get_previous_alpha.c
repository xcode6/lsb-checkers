// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_color_selection_get_previous_alpha
static guint16(*funcptr) (GtkColorSelection * ) = 0;

extern int __lsb_check_params;
guint16 gtk_color_selection_get_previous_alpha (GtkColorSelection * arg0 )
{
	int reset_flag = __lsb_check_params;
	guint16 ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_color_selection_get_previous_alpha()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_selection_get_previous_alpha");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_selection_get_previous_alpha. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_selection_get_previous_alpha() - validating");
		validate_RWaddress( arg0, "gtk_color_selection_get_previous_alpha - arg0 (colorsel)");
		validate_NULL_TYPETYPE(  arg0, "gtk_color_selection_get_previous_alpha - arg0 (colorsel)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

