// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <stdarg.h>
#undef gtk_style_context_get_style_valist
static void(*funcptr) (GtkStyleContext * , va_list ) = 0;

extern int __lsb_check_params;
void gtk_style_context_get_style_valist (GtkStyleContext * arg0 , va_list arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_style_context_get_style_valist()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_context_get_style_valist");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_context_get_style_valist. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_context_get_style_valist() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_style_context_get_style_valist - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_style_context_get_style_valist - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "gtk_style_context_get_style_valist - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
