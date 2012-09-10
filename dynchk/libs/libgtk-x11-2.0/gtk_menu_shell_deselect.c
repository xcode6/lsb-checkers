// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_menu_shell_deselect
static void(*funcptr) (GtkMenuShell * ) = 0;

extern int __lsb_check_params;
void gtk_menu_shell_deselect (GtkMenuShell * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_menu_shell_deselect()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_menu_shell_deselect");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_menu_shell_deselect. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_menu_shell_deselect() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_menu_shell_deselect - arg0 (menu_shell)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_menu_shell_deselect - arg0 (menu_shell)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

