// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <cairo/cairo.h>
#include <glib-2.0/glib.h>
#undef gtk_render_expander
static void(*funcptr) (GtkStyleContext * , cairo_t * , gdouble , gdouble , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
void gtk_render_expander (GtkStyleContext * arg0 , cairo_t * arg1 , gdouble arg2 , gdouble arg3 , gdouble arg4 , gdouble arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_render_expander()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_render_expander");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_render_expander. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_render_expander() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_render_expander - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_render_expander - arg0 (context)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_render_expander - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_render_expander - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_render_expander - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_render_expander - arg3");
		validate_NULL_TYPETYPE(  arg4, "gtk_render_expander - arg4");
		validate_NULL_TYPETYPE(  arg5, "gtk_render_expander - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}
