// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <glib-2.0/glib.h>
#undef gdk_pixbuf_save_to_callbackv
static gboolean(*funcptr) (GdkPixbuf * , GdkPixbufSaveFunc , gpointer , const char * , char * * , char * * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean gdk_pixbuf_save_to_callbackv (GdkPixbuf * arg0 , GdkPixbufSaveFunc arg1 , gpointer arg2 , const char * arg3 , char * * arg4 , char * * arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_save_to_callbackv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_save_to_callbackv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_save_to_callbackv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_save_to_callbackv() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_save_to_callbackv - arg0 (pixbuf)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_save_to_callbackv - arg0 (pixbuf)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_save_to_callbackv - arg1 (save_func)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_save_to_callbackv - arg2 (user_data)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gdk_pixbuf_save_to_callbackv - arg3 (type)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_save_to_callbackv - arg3 (type)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gdk_pixbuf_save_to_callbackv - arg4 (option_keys)");
		}
		validate_NULL_TYPETYPE(  arg4, "gdk_pixbuf_save_to_callbackv - arg4 (option_keys)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gdk_pixbuf_save_to_callbackv - arg5 (option_values)");
		}
		validate_NULL_TYPETYPE(  arg5, "gdk_pixbuf_save_to_callbackv - arg5 (option_values)");
		if( arg6 ) {
		validate_RWaddress( arg6, "gdk_pixbuf_save_to_callbackv - arg6 (error)");
		}
		validate_NULL_TYPETYPE(  arg6, "gdk_pixbuf_save_to_callbackv - arg6 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

