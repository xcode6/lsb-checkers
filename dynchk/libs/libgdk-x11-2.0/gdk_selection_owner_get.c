// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_selection_owner_get
static GdkWindow *(*funcptr) (GdkAtom ) = 0;

extern int __lsb_check_params;
GdkWindow * gdk_selection_owner_get (GdkAtom arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkWindow * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_selection_owner_get()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_selection_owner_get");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_selection_owner_get. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_selection_owner_get() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_selection_owner_get - arg0 (selection)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

