// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_cell_view_get_cell_renderers
static GList *(*funcptr) (GtkCellView * ) = 0;

extern int __lsb_check_params;
GList * gtk_cell_view_get_cell_renderers (GtkCellView * arg0 )
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_view_get_cell_renderers()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_view_get_cell_renderers");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_view_get_cell_renderers. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_view_get_cell_renderers() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_view_get_cell_renderers - arg0 (cell_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_view_get_cell_renderers - arg0 (cell_view)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

