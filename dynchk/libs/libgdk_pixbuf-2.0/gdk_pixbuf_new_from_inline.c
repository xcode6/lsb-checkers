// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_new_from_inline
static GdkPixbuf *(*funcptr) (gint , const guint8 * , gboolean , GError * * ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_new_from_inline (gint arg0 , const guint8 * arg1 , gboolean arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_new_from_inline()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_new_from_inline");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_new_from_inline. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_new_from_inline() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_new_from_inline - arg0 (data_length)");
		validate_Rdaddress( arg1, "gdk_pixbuf_new_from_inline - arg1 (data)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_new_from_inline - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_new_from_inline - arg2 (copy_pixels)");
		validate_RWaddress( arg3, "gdk_pixbuf_new_from_inline - arg3 (error)");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_new_from_inline - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

