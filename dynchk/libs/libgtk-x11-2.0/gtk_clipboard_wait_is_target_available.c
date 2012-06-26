// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_clipboard_wait_is_target_available
static gboolean(*funcptr) (GtkClipboard * , GdkAtom ) = 0;

extern int __lsb_check_params;
gboolean gtk_clipboard_wait_is_target_available (GtkClipboard * arg0 , GdkAtom arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_clipboard_wait_is_target_available()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_clipboard_wait_is_target_available");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_clipboard_wait_is_target_available. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_clipboard_wait_is_target_available() - validating");
		validate_RWaddress( arg0, "gtk_clipboard_wait_is_target_available - arg0 (clipboard)");
		validate_NULL_TYPETYPE(  arg0, "gtk_clipboard_wait_is_target_available - arg0 (clipboard)");
		validate_NULL_TYPETYPE(  arg1, "gtk_clipboard_wait_is_target_available - arg1 (target)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

