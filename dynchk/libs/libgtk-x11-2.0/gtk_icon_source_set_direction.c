// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_icon_source_set_direction
static void(*funcptr) (GtkIconSource * , GtkTextDirection ) = 0;

extern int __lsb_check_params;
void gtk_icon_source_set_direction (GtkIconSource * arg0 , GtkTextDirection arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_icon_source_set_direction()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_source_set_direction");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_source_set_direction. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_source_set_direction() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_source_set_direction - arg0 (source)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_source_set_direction - arg0 (source)");
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_source_set_direction - arg1 (direction)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

