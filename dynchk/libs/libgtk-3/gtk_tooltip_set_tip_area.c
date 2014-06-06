// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_tooltip_set_tip_area
static void(*funcptr) (GtkTooltip * , const GdkRectangle * ) = 0;

extern int __lsb_check_params;
void gtk_tooltip_set_tip_area (GtkTooltip * arg0 , const GdkRectangle * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tooltip_set_tip_area()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tooltip_set_tip_area");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tooltip_set_tip_area. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tooltip_set_tip_area() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tooltip_set_tip_area - arg0 (tooltip)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tooltip_set_tip_area - arg0 (tooltip)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_tooltip_set_tip_area - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tooltip_set_tip_area - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

