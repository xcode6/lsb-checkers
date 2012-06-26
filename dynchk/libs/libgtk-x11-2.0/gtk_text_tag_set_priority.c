// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_tag_set_priority
static void(*funcptr) (GtkTextTag * , gint ) = 0;

extern int __lsb_check_params;
void gtk_text_tag_set_priority (GtkTextTag * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_tag_set_priority()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_tag_set_priority");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_tag_set_priority. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_tag_set_priority() - validating");
		validate_RWaddress( arg0, "gtk_text_tag_set_priority - arg0 (tag)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_tag_set_priority - arg0 (tag)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_tag_set_priority - arg1 (priority)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

