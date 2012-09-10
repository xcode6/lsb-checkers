// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_binding_entry_clear
static void(*funcptr) (GtkBindingSet * , guint , GdkModifierType ) = 0;

extern int __lsb_check_params;
void gtk_binding_entry_clear (GtkBindingSet * arg0 , guint arg1 , GdkModifierType arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_binding_entry_clear()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_binding_entry_clear");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_binding_entry_clear. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_binding_entry_clear() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_binding_entry_clear - arg0 (binding_set)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_binding_entry_clear - arg0 (binding_set)");
		validate_NULL_TYPETYPE(  arg1, "gtk_binding_entry_clear - arg1 (keyval)");
		validate_NULL_TYPETYPE(  arg2, "gtk_binding_entry_clear - arg2 (modifiers)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

