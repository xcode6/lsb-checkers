// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_interp_type_get_type
static GType(*funcptr) () = 0;

extern int __lsb_check_params;
GType gdk_interp_type_get_type ()
{
	int reset_flag = __lsb_check_params;
	GType ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_interp_type_get_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_interp_type_get_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_interp_type_get_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_interp_type_get_type() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

