// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_container_set_resize_mode
static void(*funcptr) (GtkContainer * , GtkResizeMode ) = 0;

extern int __lsb_check_params;
void gtk_container_set_resize_mode (GtkContainer * arg0 , GtkResizeMode arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_container_set_resize_mode()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_container_set_resize_mode");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_container_set_resize_mode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_container_set_resize_mode() - validating");
		validate_RWaddress( arg0, "gtk_container_set_resize_mode - arg0 (container)");
		validate_NULL_TYPETYPE(  arg0, "gtk_container_set_resize_mode - arg0 (container)");
		validate_NULL_TYPETYPE(  arg1, "gtk_container_set_resize_mode - arg1 (resize_mode)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

