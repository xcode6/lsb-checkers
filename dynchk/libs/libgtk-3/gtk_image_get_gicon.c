// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/gio/giotypes.h>
#undef gtk_image_get_gicon
static void(*funcptr) (GtkImage * , GIcon * * , GtkIconSize * ) = 0;

extern int __lsb_check_params;
void gtk_image_get_gicon (GtkImage * arg0 , GIcon * * arg1 , GtkIconSize * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_image_get_gicon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_image_get_gicon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_image_get_gicon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_image_get_gicon() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_image_get_gicon - arg0 (image)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_image_get_gicon - arg0 (image)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_image_get_gicon - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_image_get_gicon - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_image_get_gicon - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_image_get_gicon - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

