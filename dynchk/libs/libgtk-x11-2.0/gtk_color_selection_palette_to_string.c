// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_color_selection_palette_to_string
static gchar *(*funcptr) (const GdkColor * , gint ) = 0;

extern int __lsb_check_params;
gchar * gtk_color_selection_palette_to_string (const GdkColor * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_color_selection_palette_to_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_selection_palette_to_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_selection_palette_to_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_selection_palette_to_string() - validating");
		validate_Rdaddress( arg0, "gtk_color_selection_palette_to_string - arg0 (colors)");
		validate_NULL_TYPETYPE(  arg0, "gtk_color_selection_palette_to_string - arg0 (colors)");
		validate_NULL_TYPETYPE(  arg1, "gtk_color_selection_palette_to_string - arg1 (n_colors)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

