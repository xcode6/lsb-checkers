// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_buffer_get_iter_at_mark
static void(*funcptr) (GtkTextBuffer * , GtkTextIter * , GtkTextMark * ) = 0;

extern int __lsb_check_params;
void gtk_text_buffer_get_iter_at_mark (GtkTextBuffer * arg0 , GtkTextIter * arg1 , GtkTextMark * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_get_iter_at_mark()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_get_iter_at_mark");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_get_iter_at_mark. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_get_iter_at_mark() - validating");
		validate_RWaddress( arg0, "gtk_text_buffer_get_iter_at_mark - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_get_iter_at_mark - arg0 (buffer)");
		validate_RWaddress( arg1, "gtk_text_buffer_get_iter_at_mark - arg1 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_get_iter_at_mark - arg1 (iter)");
		validate_RWaddress( arg2, "gtk_text_buffer_get_iter_at_mark - arg2 (mark)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_get_iter_at_mark - arg2 (mark)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

