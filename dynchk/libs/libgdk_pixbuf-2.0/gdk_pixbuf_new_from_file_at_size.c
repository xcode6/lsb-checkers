// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_new_from_file_at_size
static GdkPixbuf *(*funcptr) (const char * , int , int , GError * * ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_new_from_file_at_size (const char * arg0 , int arg1 , int arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_new_from_file_at_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_new_from_file_at_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_new_from_file_at_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_new_from_file_at_size() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_pixbuf_new_from_file_at_size - arg0 (filename)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_new_from_file_at_size - arg0 (filename)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_new_from_file_at_size - arg1 (width)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_new_from_file_at_size - arg2 (height)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_pixbuf_new_from_file_at_size - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_new_from_file_at_size - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

