// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_iter_set_visible_line_offset
static void(*funcptr) (GtkTextIter * , gint ) = 0;

extern int __lsb_check_params;
void gtk_text_iter_set_visible_line_offset (GtkTextIter * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_iter_set_visible_line_offset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_iter_set_visible_line_offset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_iter_set_visible_line_offset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_iter_set_visible_line_offset() - validating");
		validate_RWaddress( arg0, "gtk_text_iter_set_visible_line_offset - arg0 (iter)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_iter_set_visible_line_offset - arg0 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_iter_set_visible_line_offset - arg1 (char_on_line)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

