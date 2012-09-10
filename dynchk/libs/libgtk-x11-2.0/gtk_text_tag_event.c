// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_text_tag_event
static gboolean(*funcptr) (GtkTextTag * , GObject * , GdkEvent * , const GtkTextIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_tag_event (GtkTextTag * arg0 , GObject * arg1 , GdkEvent * arg2 , const GtkTextIter * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_tag_event()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_tag_event");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_tag_event. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_tag_event() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_tag_event - arg0 (tag)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_tag_event - arg0 (tag)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_text_tag_event - arg1 (event_object)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_tag_event - arg1 (event_object)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_text_tag_event - arg2 (event)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_text_tag_event - arg2 (event)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_text_tag_event - arg3 (iter)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_text_tag_event - arg3 (iter)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

