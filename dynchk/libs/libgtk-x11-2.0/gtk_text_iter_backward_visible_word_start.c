// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_iter_backward_visible_word_start
static gboolean(*funcptr) (GtkTextIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_iter_backward_visible_word_start (GtkTextIter * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_iter_backward_visible_word_start()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_iter_backward_visible_word_start");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_iter_backward_visible_word_start. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_iter_backward_visible_word_start() - validating");
		validate_RWaddress( arg0, "gtk_text_iter_backward_visible_word_start - arg0 (iter)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_iter_backward_visible_word_start - arg0 (iter)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
