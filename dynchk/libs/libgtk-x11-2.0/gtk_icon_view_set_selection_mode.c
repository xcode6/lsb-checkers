// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_icon_view_set_selection_mode
static void(*funcptr) (GtkIconView * , GtkSelectionMode ) = 0;

extern int __lsb_check_params;
void gtk_icon_view_set_selection_mode (GtkIconView * arg0 , GtkSelectionMode arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_icon_view_set_selection_mode()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_view_set_selection_mode");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_view_set_selection_mode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_view_set_selection_mode() - validating");
		validate_RWaddress( arg0, "gtk_icon_view_set_selection_mode - arg0 (icon_view)");
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_view_set_selection_mode - arg0 (icon_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_view_set_selection_mode - arg1 (mode)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

