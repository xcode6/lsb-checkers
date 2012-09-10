// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_get_file_info
static GdkPixbufFormat *(*funcptr) (const gchar * , gint * , gint * ) = 0;

extern int __lsb_check_params;
GdkPixbufFormat * gdk_pixbuf_get_file_info (const gchar * arg0 , gint * arg1 , gint * arg2 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbufFormat * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_get_file_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_get_file_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_get_file_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_get_file_info() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_pixbuf_get_file_info - arg0 (filename)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_get_file_info - arg0 (filename)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixbuf_get_file_info - arg1 (width)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_get_file_info - arg1 (width)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_pixbuf_get_file_info - arg2 (height)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_get_file_info - arg2 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

