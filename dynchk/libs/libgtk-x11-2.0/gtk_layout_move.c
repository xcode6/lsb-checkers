// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_layout_move
static void(*funcptr) (GtkLayout * , GtkWidget * , gint , gint ) = 0;

extern int __lsb_check_params;
void gtk_layout_move (GtkLayout * arg0 , GtkWidget * arg1 , gint arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_layout_move()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_layout_move");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_layout_move. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_layout_move() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_layout_move - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_layout_move - arg0 (layout)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_layout_move - arg1 (child_widget)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_layout_move - arg1 (child_widget)");
		validate_NULL_TYPETYPE(  arg2, "gtk_layout_move - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "gtk_layout_move - arg3 (y)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
