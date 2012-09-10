// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_buffer_remove_selection_clipboard
static void(*funcptr) (GtkTextBuffer * , GtkClipboard * ) = 0;

extern int __lsb_check_params;
void gtk_text_buffer_remove_selection_clipboard (GtkTextBuffer * arg0 , GtkClipboard * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_remove_selection_clipboard()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_remove_selection_clipboard");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_remove_selection_clipboard. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_remove_selection_clipboard() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_buffer_remove_selection_clipboard - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_remove_selection_clipboard - arg0 (buffer)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_text_buffer_remove_selection_clipboard - arg1 (clipboard)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_remove_selection_clipboard - arg1 (clipboard)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

