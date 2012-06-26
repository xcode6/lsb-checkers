// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tooltips_set_tip
static void(*funcptr) (GtkTooltips * , GtkWidget * , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_tooltips_set_tip (GtkTooltips * arg0 , GtkWidget * arg1 , const gchar * arg2 , const gchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tooltips_set_tip()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tooltips_set_tip");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tooltips_set_tip. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tooltips_set_tip() - validating");
		validate_RWaddress( arg0, "gtk_tooltips_set_tip - arg0 (tooltips)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tooltips_set_tip - arg0 (tooltips)");
		validate_RWaddress( arg1, "gtk_tooltips_set_tip - arg1 (widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tooltips_set_tip - arg1 (widget)");
		validate_Rdaddress( arg2, "gtk_tooltips_set_tip - arg2 (tip_text)");
		validate_NULL_TYPETYPE(  arg2, "gtk_tooltips_set_tip - arg2 (tip_text)");
		validate_Rdaddress( arg3, "gtk_tooltips_set_tip - arg3 (tip_private)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tooltips_set_tip - arg3 (tip_private)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

