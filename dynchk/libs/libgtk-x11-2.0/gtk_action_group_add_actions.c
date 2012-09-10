// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_action_group_add_actions
static void(*funcptr) (GtkActionGroup * , const GtkActionEntry * , guint , gpointer ) = 0;

extern int __lsb_check_params;
void gtk_action_group_add_actions (GtkActionGroup * arg0 , const GtkActionEntry * arg1 , guint arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_action_group_add_actions()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_action_group_add_actions");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_action_group_add_actions. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_action_group_add_actions() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_action_group_add_actions - arg0 (action_group)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_action_group_add_actions - arg0 (action_group)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_action_group_add_actions - arg1 (entries)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_action_group_add_actions - arg1 (entries)");
		validate_NULL_TYPETYPE(  arg2, "gtk_action_group_add_actions - arg2 (n_entries)");
		validate_NULL_TYPETYPE(  arg3, "gtk_action_group_add_actions - arg3 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

