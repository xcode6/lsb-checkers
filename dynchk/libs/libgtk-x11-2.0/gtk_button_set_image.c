// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_button_set_image
static void(*funcptr) (GtkButton * , GtkWidget * ) = 0;

extern int __lsb_check_params;
void gtk_button_set_image (GtkButton * arg0 , GtkWidget * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_button_set_image()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_button_set_image");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_button_set_image. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_button_set_image() - validating");
		validate_RWaddress( arg0, "gtk_button_set_image - arg0 (button)");
		validate_NULL_TYPETYPE(  arg0, "gtk_button_set_image - arg0 (button)");
		validate_RWaddress( arg1, "gtk_button_set_image - arg1 (image)");
		validate_NULL_TYPETYPE(  arg1, "gtk_button_set_image - arg1 (image)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

