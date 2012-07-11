// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_check_menu_item_toggled
static void(*funcptr) (GtkCheckMenuItem * ) = 0;

extern int __lsb_check_params;
void gtk_check_menu_item_toggled (GtkCheckMenuItem * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_check_menu_item_toggled()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_check_menu_item_toggled");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_check_menu_item_toggled. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_check_menu_item_toggled() - validating");
		validate_RWaddress( arg0, "gtk_check_menu_item_toggled - arg0 (check_menu_item)");
		validate_NULL_TYPETYPE(  arg0, "gtk_check_menu_item_toggled - arg0 (check_menu_item)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
