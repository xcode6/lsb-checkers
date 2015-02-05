// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_font_chooser_set_font
static void(*funcptr) (GtkFontChooser * , const char * ) = 0;

extern int __lsb_check_params;
void gtk_font_chooser_set_font (GtkFontChooser * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_font_chooser_set_font()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_font_chooser_set_font");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_font_chooser_set_font. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_font_chooser_set_font() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_font_chooser_set_font - arg0 (fontchooser)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_font_chooser_set_font - arg0 (fontchooser)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_font_chooser_set_font - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_font_chooser_set_font - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
