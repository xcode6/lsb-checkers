// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_clipboard_request_contents
static void(*funcptr) (GtkClipboard * , GdkAtom , GtkClipboardReceivedFunc , gpointer ) = 0;

extern int __lsb_check_params;
void gtk_clipboard_request_contents (GtkClipboard * arg0 , GdkAtom arg1 , GtkClipboardReceivedFunc arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_clipboard_request_contents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_clipboard_request_contents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_clipboard_request_contents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_clipboard_request_contents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_clipboard_request_contents - arg0 (clipboard)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_clipboard_request_contents - arg0 (clipboard)");
		validate_NULL_TYPETYPE(  arg1, "gtk_clipboard_request_contents - arg1 (target)");
		validate_NULL_TYPETYPE(  arg2, "gtk_clipboard_request_contents - arg2 (callback)");
		validate_NULL_TYPETYPE(  arg3, "gtk_clipboard_request_contents - arg3 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

