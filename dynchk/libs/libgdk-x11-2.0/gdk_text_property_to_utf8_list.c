// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_text_property_to_utf8_list
static gint(*funcptr) (GdkAtom , gint , const guchar * , gint , gchar * * * ) = 0;

extern int __lsb_check_params;
gint gdk_text_property_to_utf8_list (GdkAtom arg0 , gint arg1 , const guchar * arg2 , gint arg3 , gchar * * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_text_property_to_utf8_list()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_text_property_to_utf8_list");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_text_property_to_utf8_list. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_text_property_to_utf8_list() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_text_property_to_utf8_list - arg0 (encoding)");
		validate_NULL_TYPETYPE(  arg1, "gdk_text_property_to_utf8_list - arg1 (format)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gdk_text_property_to_utf8_list - arg2 (text)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_text_property_to_utf8_list - arg2 (text)");
		validate_NULL_TYPETYPE(  arg3, "gdk_text_property_to_utf8_list - arg3 (length)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gdk_text_property_to_utf8_list - arg4 (list)");
		}
		validate_NULL_TYPETYPE(  arg4, "gdk_text_property_to_utf8_list - arg4 (list)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

