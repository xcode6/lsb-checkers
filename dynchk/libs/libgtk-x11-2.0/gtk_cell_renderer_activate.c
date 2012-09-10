// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_cell_renderer_activate
static gboolean(*funcptr) (GtkCellRenderer * , GdkEvent * , GtkWidget * , const gchar * , const GdkRectangle * , const GdkRectangle * , GtkCellRendererState ) = 0;

extern int __lsb_check_params;
gboolean gtk_cell_renderer_activate (GtkCellRenderer * arg0 , GdkEvent * arg1 , GtkWidget * arg2 , const gchar * arg3 , const GdkRectangle * arg4 , const GdkRectangle * arg5 , GtkCellRendererState arg6 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_renderer_activate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_renderer_activate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_renderer_activate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_renderer_activate() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_renderer_activate - arg0 (cell)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_renderer_activate - arg0 (cell)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_cell_renderer_activate - arg1 (event)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_renderer_activate - arg1 (event)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_cell_renderer_activate - arg2 (widget)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_cell_renderer_activate - arg2 (widget)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_cell_renderer_activate - arg3 (path)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_cell_renderer_activate - arg3 (path)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "gtk_cell_renderer_activate - arg4 (background_area)");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_cell_renderer_activate - arg4 (background_area)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "gtk_cell_renderer_activate - arg5 (cell_area)");
		}
		validate_NULL_TYPETYPE(  arg5, "gtk_cell_renderer_activate - arg5 (cell_area)");
		validate_NULL_TYPETYPE(  arg6, "gtk_cell_renderer_activate - arg6 (flags)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

