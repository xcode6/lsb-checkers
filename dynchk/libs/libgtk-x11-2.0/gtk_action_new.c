// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_action_new
static GtkAction *(*funcptr) (const gchar * , const gchar * , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
GtkAction * gtk_action_new (const gchar * arg0 , const gchar * arg1 , const gchar * arg2 , const gchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	GtkAction * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_action_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_action_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_action_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_action_new() - validating");
		validate_Rdaddress( arg0, "gtk_action_new - arg0 (name)");
		validate_NULL_TYPETYPE(  arg0, "gtk_action_new - arg0 (name)");
		validate_Rdaddress( arg1, "gtk_action_new - arg1 (label)");
		validate_NULL_TYPETYPE(  arg1, "gtk_action_new - arg1 (label)");
		validate_Rdaddress( arg2, "gtk_action_new - arg2 (tooltip)");
		validate_NULL_TYPETYPE(  arg2, "gtk_action_new - arg2 (tooltip)");
		validate_Rdaddress( arg3, "gtk_action_new - arg3 (stock_id)");
		validate_NULL_TYPETYPE(  arg3, "gtk_action_new - arg3 (stock_id)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

