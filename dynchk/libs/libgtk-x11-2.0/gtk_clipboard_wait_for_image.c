// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_clipboard_wait_for_image
static GdkPixbuf *(*funcptr) (GtkClipboard * ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gtk_clipboard_wait_for_image (GtkClipboard * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_clipboard_wait_for_image()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_clipboard_wait_for_image");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_clipboard_wait_for_image. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_clipboard_wait_for_image() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_clipboard_wait_for_image - arg0 (clipboard)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_clipboard_wait_for_image - arg0 (clipboard)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
