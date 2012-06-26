// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_keyval_to_upper
static guint(*funcptr) (guint ) = 0;

extern int __lsb_check_params;
guint gdk_keyval_to_upper (guint arg0 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_keyval_to_upper()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_keyval_to_upper");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_keyval_to_upper. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_keyval_to_upper() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_keyval_to_upper - arg0 (keyval)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

