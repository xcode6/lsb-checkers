// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_font_button_set_use_size
static void(*funcptr) (GtkFontButton * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_font_button_set_use_size (GtkFontButton * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_font_button_set_use_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_font_button_set_use_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_font_button_set_use_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_font_button_set_use_size() - validating");
		validate_RWaddress( arg0, "gtk_font_button_set_use_size - arg0 (font_button)");
		validate_NULL_TYPETYPE(  arg0, "gtk_font_button_set_use_size - arg0 (font_button)");
		validate_NULL_TYPETYPE(  arg1, "gtk_font_button_set_use_size - arg1 (use_size)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

