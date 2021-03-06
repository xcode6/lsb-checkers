// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_targets_include_text
static gboolean(*funcptr) (GdkAtom * , gint ) = 0;

extern int __lsb_check_params;
gboolean gtk_targets_include_text (GdkAtom * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_targets_include_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_targets_include_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_targets_include_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_targets_include_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_targets_include_text - arg0 (targets)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_targets_include_text - arg0 (targets)");
		validate_NULL_TYPETYPE(  arg1, "gtk_targets_include_text - arg1 (n_targets)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

