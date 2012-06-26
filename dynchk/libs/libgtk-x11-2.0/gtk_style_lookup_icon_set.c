// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_style_lookup_icon_set
static GtkIconSet *(*funcptr) (GtkStyle * , const char * ) = 0;

extern int __lsb_check_params;
GtkIconSet * gtk_style_lookup_icon_set (GtkStyle * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkIconSet * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_style_lookup_icon_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_lookup_icon_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_lookup_icon_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_lookup_icon_set() - validating");
		validate_RWaddress( arg0, "gtk_style_lookup_icon_set - arg0 (style)");
		validate_NULL_TYPETYPE(  arg0, "gtk_style_lookup_icon_set - arg0 (style)");
		validate_Rdaddress( arg1, "gtk_style_lookup_icon_set - arg1 (stock_id)");
		validate_NULL_TYPETYPE(  arg1, "gtk_style_lookup_icon_set - arg1 (stock_id)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

