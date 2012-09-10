// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_image_new_from_pixmap
static GtkWidget *(*funcptr) (GdkPixmap * , GdkBitmap * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_image_new_from_pixmap (GdkPixmap * arg0 , GdkBitmap * arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_image_new_from_pixmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_image_new_from_pixmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_image_new_from_pixmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_image_new_from_pixmap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_image_new_from_pixmap - arg0 (pixmap)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_image_new_from_pixmap - arg0 (pixmap)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_image_new_from_pixmap - arg1 (mask)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_image_new_from_pixmap - arg1 (mask)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

