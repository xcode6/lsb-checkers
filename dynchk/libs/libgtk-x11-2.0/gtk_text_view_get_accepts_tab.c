// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_view_get_accepts_tab
static gboolean(*funcptr) (GtkTextView * ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_view_get_accepts_tab (GtkTextView * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_view_get_accepts_tab()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_view_get_accepts_tab");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_view_get_accepts_tab. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_view_get_accepts_tab() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_view_get_accepts_tab - arg0 (text_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_view_get_accepts_tab - arg0 (text_view)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

