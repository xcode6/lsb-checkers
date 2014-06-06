// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_color_button_set_rgba
static void(*funcptr) (GtkColorButton * , const GdkRGBA * ) = 0;

extern int __lsb_check_params;
void gtk_color_button_set_rgba (GtkColorButton * arg0 , const GdkRGBA * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_color_button_set_rgba()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_color_button_set_rgba");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_color_button_set_rgba. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_color_button_set_rgba() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_color_button_set_rgba - arg0 (button)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_color_button_set_rgba - arg0 (button)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_color_button_set_rgba - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_color_button_set_rgba - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

