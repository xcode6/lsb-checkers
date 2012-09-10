// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_loader_new_with_type
static GdkPixbufLoader *(*funcptr) (const char * , GError * * ) = 0;

extern int __lsb_check_params;
GdkPixbufLoader * gdk_pixbuf_loader_new_with_type (const char * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbufLoader * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_loader_new_with_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_loader_new_with_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_loader_new_with_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_loader_new_with_type() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_pixbuf_loader_new_with_type - arg0 (image_type)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_loader_new_with_type - arg0 (image_type)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixbuf_loader_new_with_type - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_loader_new_with_type - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

