// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#include <glib-2.0/glib.h>
#undef gtk_paint_polygon
static void(*funcptr) (GtkStyle * , GdkWindow * , GtkStateType , GtkShadowType , const GdkRectangle * , GtkWidget * , const gchar * , const GdkPoint * , gint , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_paint_polygon (GtkStyle * arg0 , GdkWindow * arg1 , GtkStateType arg2 , GtkShadowType arg3 , const GdkRectangle * arg4 , GtkWidget * arg5 , const gchar * arg6 , const GdkPoint * arg7 , gint arg8 , gboolean arg9 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_paint_polygon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_paint_polygon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_paint_polygon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_paint_polygon() - validating");
		validate_RWaddress( arg0, "gtk_paint_polygon - arg0 (style)");
		validate_NULL_TYPETYPE(  arg0, "gtk_paint_polygon - arg0 (style)");
		validate_RWaddress( arg1, "gtk_paint_polygon - arg1 (window)");
		validate_NULL_TYPETYPE(  arg1, "gtk_paint_polygon - arg1 (window)");
		validate_NULL_TYPETYPE(  arg2, "gtk_paint_polygon - arg2 (state_type)");
		validate_NULL_TYPETYPE(  arg3, "gtk_paint_polygon - arg3 (shadow_type)");
		validate_Rdaddress( arg4, "gtk_paint_polygon - arg4 (area)");
		validate_NULL_TYPETYPE(  arg4, "gtk_paint_polygon - arg4 (area)");
		validate_RWaddress( arg5, "gtk_paint_polygon - arg5 (widget)");
		validate_NULL_TYPETYPE(  arg5, "gtk_paint_polygon - arg5 (widget)");
		validate_Rdaddress( arg6, "gtk_paint_polygon - arg6 (detail)");
		validate_NULL_TYPETYPE(  arg6, "gtk_paint_polygon - arg6 (detail)");
		validate_Rdaddress( arg7, "gtk_paint_polygon - arg7 (points)");
		validate_NULL_TYPETYPE(  arg7, "gtk_paint_polygon - arg7 (points)");
		validate_NULL_TYPETYPE(  arg8, "gtk_paint_polygon - arg8 (npoints)");
		validate_NULL_TYPETYPE(  arg9, "gtk_paint_polygon - arg9 (fill)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
}

