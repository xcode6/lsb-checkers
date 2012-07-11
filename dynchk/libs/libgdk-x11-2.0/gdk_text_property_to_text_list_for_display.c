// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_text_property_to_text_list_for_display
static gint(*funcptr) (GdkDisplay * , GdkAtom , gint , const guchar * , gint , gchar * * * ) = 0;

extern int __lsb_check_params;
gint gdk_text_property_to_text_list_for_display (GdkDisplay * arg0 , GdkAtom arg1 , gint arg2 , const guchar * arg3 , gint arg4 , gchar * * * arg5 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_text_property_to_text_list_for_display()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_text_property_to_text_list_for_display");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_text_property_to_text_list_for_display. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_text_property_to_text_list_for_display() - validating");
		validate_RWaddress( arg0, "gdk_text_property_to_text_list_for_display - arg0 (display)");
		validate_NULL_TYPETYPE(  arg0, "gdk_text_property_to_text_list_for_display - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "gdk_text_property_to_text_list_for_display - arg1 (encoding)");
		validate_NULL_TYPETYPE(  arg2, "gdk_text_property_to_text_list_for_display - arg2 (format)");
		validate_Rdaddress( arg3, "gdk_text_property_to_text_list_for_display - arg3 (text)");
		validate_NULL_TYPETYPE(  arg3, "gdk_text_property_to_text_list_for_display - arg3 (text)");
		validate_NULL_TYPETYPE(  arg4, "gdk_text_property_to_text_list_for_display - arg4 (length)");
		validate_RWaddress( arg5, "gdk_text_property_to_text_list_for_display - arg5 (list)");
		validate_NULL_TYPETYPE(  arg5, "gdk_text_property_to_text_list_for_display - arg5 (list)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
