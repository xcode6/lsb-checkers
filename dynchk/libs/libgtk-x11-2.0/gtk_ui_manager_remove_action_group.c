// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_ui_manager_remove_action_group
static void(*funcptr) (GtkUIManager * , GtkActionGroup * ) = 0;

extern int __lsb_check_params;
void gtk_ui_manager_remove_action_group (GtkUIManager * arg0 , GtkActionGroup * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_ui_manager_remove_action_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_ui_manager_remove_action_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_ui_manager_remove_action_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_ui_manager_remove_action_group() - validating");
		validate_RWaddress( arg0, "gtk_ui_manager_remove_action_group - arg0 (self)");
		validate_NULL_TYPETYPE(  arg0, "gtk_ui_manager_remove_action_group - arg0 (self)");
		validate_RWaddress( arg1, "gtk_ui_manager_remove_action_group - arg1 (action_group)");
		validate_NULL_TYPETYPE(  arg1, "gtk_ui_manager_remove_action_group - arg1 (action_group)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
