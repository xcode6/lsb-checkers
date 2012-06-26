// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_view_scroll_to_mark
static void(*funcptr) (GtkTextView * , GtkTextMark * , gdouble , gboolean , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
void gtk_text_view_scroll_to_mark (GtkTextView * arg0 , GtkTextMark * arg1 , gdouble arg2 , gboolean arg3 , gdouble arg4 , gdouble arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_view_scroll_to_mark()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_view_scroll_to_mark");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_view_scroll_to_mark. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_view_scroll_to_mark() - validating");
		validate_RWaddress( arg0, "gtk_text_view_scroll_to_mark - arg0 (text_view)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_view_scroll_to_mark - arg0 (text_view)");
		validate_RWaddress( arg1, "gtk_text_view_scroll_to_mark - arg1 (mark)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_view_scroll_to_mark - arg1 (mark)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_view_scroll_to_mark - arg2 (within_margin)");
		validate_NULL_TYPETYPE(  arg3, "gtk_text_view_scroll_to_mark - arg3 (use_align)");
		validate_NULL_TYPETYPE(  arg4, "gtk_text_view_scroll_to_mark - arg4 (xalign)");
		validate_NULL_TYPETYPE(  arg5, "gtk_text_view_scroll_to_mark - arg5 (yalign)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

