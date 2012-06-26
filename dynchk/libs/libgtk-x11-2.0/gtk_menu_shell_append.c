// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_menu_shell_append
static void(*funcptr) (GtkMenuShell * , GtkWidget * ) = 0;

extern int __lsb_check_params;
void gtk_menu_shell_append (GtkMenuShell * arg0 , GtkWidget * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_menu_shell_append()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_menu_shell_append");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_menu_shell_append. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_menu_shell_append() - validating");
		validate_RWaddress( arg0, "gtk_menu_shell_append - arg0 (menu_shell)");
		validate_NULL_TYPETYPE(  arg0, "gtk_menu_shell_append - arg0 (menu_shell)");
		validate_RWaddress( arg1, "gtk_menu_shell_append - arg1 (child)");
		validate_NULL_TYPETYPE(  arg1, "gtk_menu_shell_append - arg1 (child)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

