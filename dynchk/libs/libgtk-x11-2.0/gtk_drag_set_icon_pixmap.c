// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_drag_set_icon_pixmap
static void(*funcptr) (GdkDragContext * , GdkColormap * , GdkPixmap * , GdkBitmap * , gint , gint ) = 0;

extern int __lsb_check_params;
void gtk_drag_set_icon_pixmap (GdkDragContext * arg0 , GdkColormap * arg1 , GdkPixmap * arg2 , GdkBitmap * arg3 , gint arg4 , gint arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_drag_set_icon_pixmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_drag_set_icon_pixmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_drag_set_icon_pixmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_drag_set_icon_pixmap() - validating");
		validate_RWaddress( arg0, "gtk_drag_set_icon_pixmap - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "gtk_drag_set_icon_pixmap - arg0 (context)");
		validate_RWaddress( arg1, "gtk_drag_set_icon_pixmap - arg1 (colormap)");
		validate_NULL_TYPETYPE(  arg1, "gtk_drag_set_icon_pixmap - arg1 (colormap)");
		validate_RWaddress( arg2, "gtk_drag_set_icon_pixmap - arg2 (pixmap)");
		validate_NULL_TYPETYPE(  arg2, "gtk_drag_set_icon_pixmap - arg2 (pixmap)");
		validate_RWaddress( arg3, "gtk_drag_set_icon_pixmap - arg3 (mask)");
		validate_NULL_TYPETYPE(  arg3, "gtk_drag_set_icon_pixmap - arg3 (mask)");
		validate_NULL_TYPETYPE(  arg4, "gtk_drag_set_icon_pixmap - arg4 (hot_x)");
		validate_NULL_TYPETYPE(  arg5, "gtk_drag_set_icon_pixmap - arg5 (hot_y)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}
