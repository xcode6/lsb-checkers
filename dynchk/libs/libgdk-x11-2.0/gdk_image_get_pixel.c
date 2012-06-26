// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_image_get_pixel
static guint32(*funcptr) (GdkImage * , gint , gint ) = 0;

extern int __lsb_check_params;
guint32 gdk_image_get_pixel (GdkImage * arg0 , gint arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	guint32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_image_get_pixel()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_image_get_pixel");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_image_get_pixel. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_image_get_pixel() - validating");
		validate_RWaddress( arg0, "gdk_image_get_pixel - arg0 (image)");
		validate_NULL_TYPETYPE(  arg0, "gdk_image_get_pixel - arg0 (image)");
		validate_NULL_TYPETYPE(  arg1, "gdk_image_get_pixel - arg1 (x)");
		validate_NULL_TYPETYPE(  arg2, "gdk_image_get_pixel - arg2 (y)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

