// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_font_selection_get_preview_text
static const gchar *(*funcptr) (GtkFontSelection * ) = 0;

extern int __lsb_check_params;
const gchar * gtk_font_selection_get_preview_text (GtkFontSelection * arg0 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_font_selection_get_preview_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_font_selection_get_preview_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_font_selection_get_preview_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_font_selection_get_preview_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_font_selection_get_preview_text - arg0 (fontsel)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_font_selection_get_preview_text - arg0 (fontsel)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

