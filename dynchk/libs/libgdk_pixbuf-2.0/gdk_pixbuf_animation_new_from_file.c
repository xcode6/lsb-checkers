// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_animation_new_from_file
static GdkPixbufAnimation *(*funcptr) (const char * , GError * * ) = 0;

extern int __lsb_check_params;
GdkPixbufAnimation * gdk_pixbuf_animation_new_from_file (const char * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbufAnimation * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_animation_new_from_file()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_animation_new_from_file");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_animation_new_from_file. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_animation_new_from_file() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_pixbuf_animation_new_from_file - arg0 (filename)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_animation_new_from_file - arg0 (filename)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixbuf_animation_new_from_file - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_animation_new_from_file - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

