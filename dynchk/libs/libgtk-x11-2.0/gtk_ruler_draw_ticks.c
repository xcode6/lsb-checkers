// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_ruler_draw_ticks
static void(*funcptr) (GtkRuler * ) = 0;

extern int __lsb_check_params;
void gtk_ruler_draw_ticks (GtkRuler * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_ruler_draw_ticks()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_ruler_draw_ticks");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_ruler_draw_ticks. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_ruler_draw_ticks() - validating");
		validate_RWaddress( arg0, "gtk_ruler_draw_ticks - arg0 (ruler)");
		validate_NULL_TYPETYPE(  arg0, "gtk_ruler_draw_ticks - arg0 (ruler)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

