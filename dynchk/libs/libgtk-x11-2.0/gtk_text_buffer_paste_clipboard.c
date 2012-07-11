// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_buffer_paste_clipboard
static void(*funcptr) (GtkTextBuffer * , GtkClipboard * , GtkTextIter * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_text_buffer_paste_clipboard (GtkTextBuffer * arg0 , GtkClipboard * arg1 , GtkTextIter * arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_paste_clipboard()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_paste_clipboard");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_paste_clipboard. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_paste_clipboard() - validating");
		validate_RWaddress( arg0, "gtk_text_buffer_paste_clipboard - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_paste_clipboard - arg0 (buffer)");
		validate_RWaddress( arg1, "gtk_text_buffer_paste_clipboard - arg1 (clipboard)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_paste_clipboard - arg1 (clipboard)");
		validate_RWaddress( arg2, "gtk_text_buffer_paste_clipboard - arg2 (override_location)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_paste_clipboard - arg2 (override_location)");
		validate_NULL_TYPETYPE(  arg3, "gtk_text_buffer_paste_clipboard - arg3 (default_editable)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
