// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_menu_shell_select_first
static void(*funcptr) (GtkMenuShell * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_menu_shell_select_first (GtkMenuShell * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_menu_shell_select_first()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_menu_shell_select_first");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_menu_shell_select_first. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_menu_shell_select_first() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_menu_shell_select_first - arg0 (menu_shell)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_menu_shell_select_first - arg0 (menu_shell)");
		validate_NULL_TYPETYPE(  arg1, "gtk_menu_shell_select_first - arg1 (search_sensitive)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

