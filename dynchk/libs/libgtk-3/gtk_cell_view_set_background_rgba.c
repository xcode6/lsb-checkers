// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_cell_view_set_background_rgba
static void(*funcptr) (GtkCellView * , const GdkRGBA * ) = 0;

extern int __lsb_check_params;
void gtk_cell_view_set_background_rgba (GtkCellView * arg0 , const GdkRGBA * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_cell_view_set_background_rgba()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_view_set_background_rgba");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_view_set_background_rgba. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_view_set_background_rgba() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_view_set_background_rgba - arg0 (cell_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_view_set_background_rgba - arg0 (cell_view)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_cell_view_set_background_rgba - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_view_set_background_rgba - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

