// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-3.0/gdk/gdkx.h>
#undef gdk_x11_display_text_property_to_text_list
static gint(*funcptr) (GdkDisplay * , GdkAtom , gint , const unsigned char * , gint , gchar * * * ) = 0;

extern int __lsb_check_params;
gint gdk_x11_display_text_property_to_text_list (GdkDisplay * arg0 , GdkAtom arg1 , gint arg2 , const unsigned char * arg3 , gint arg4 , gchar * * * arg5 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_x11_display_text_property_to_text_list()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_display_text_property_to_text_list");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_display_text_property_to_text_list. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_display_text_property_to_text_list() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_x11_display_text_property_to_text_list - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_display_text_property_to_text_list - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "gdk_x11_display_text_property_to_text_list - arg1");
		validate_NULL_TYPETYPE(  arg2, "gdk_x11_display_text_property_to_text_list - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gdk_x11_display_text_property_to_text_list - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_x11_display_text_property_to_text_list - arg3");
		validate_NULL_TYPETYPE(  arg4, "gdk_x11_display_text_property_to_text_list - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "gdk_x11_display_text_property_to_text_list - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "gdk_x11_display_text_property_to_text_list - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
