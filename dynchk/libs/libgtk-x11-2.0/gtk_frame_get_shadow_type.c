// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_frame_get_shadow_type
static GtkShadowType(*funcptr) (GtkFrame * ) = 0;

extern int __lsb_check_params;
GtkShadowType gtk_frame_get_shadow_type (GtkFrame * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkShadowType ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_frame_get_shadow_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_frame_get_shadow_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_frame_get_shadow_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_frame_get_shadow_type() - validating");
		validate_RWaddress( arg0, "gtk_frame_get_shadow_type - arg0 (frame)");
		validate_NULL_TYPETYPE(  arg0, "gtk_frame_get_shadow_type - arg0 (frame)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
