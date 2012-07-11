// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_toggle_action_set_draw_as_radio
static void(*funcptr) (GtkToggleAction * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_toggle_action_set_draw_as_radio (GtkToggleAction * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_toggle_action_set_draw_as_radio()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_toggle_action_set_draw_as_radio");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_toggle_action_set_draw_as_radio. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_toggle_action_set_draw_as_radio() - validating");
		validate_RWaddress( arg0, "gtk_toggle_action_set_draw_as_radio - arg0 (action)");
		validate_NULL_TYPETYPE(  arg0, "gtk_toggle_action_set_draw_as_radio - arg0 (action)");
		validate_NULL_TYPETYPE(  arg1, "gtk_toggle_action_set_draw_as_radio - arg1 (draw_as_radio)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
