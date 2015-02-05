// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_init_add
static void(*funcptr) (GtkFunction , gpointer ) = 0;

extern int __lsb_check_params;
void gtk_init_add (GtkFunction arg0 , gpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_init_add()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_init_add");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_init_add. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_init_add() - validating");
		validate_NULL_TYPETYPE(  arg0, "gtk_init_add - arg0 (function)");
		validate_NULL_TYPETYPE(  arg1, "gtk_init_add - arg1 (data)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
