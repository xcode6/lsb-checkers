// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_region_copy
static GdkRegion *(*funcptr) (const GdkRegion * ) = 0;

extern int __lsb_check_params;
GdkRegion * gdk_region_copy (const GdkRegion * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkRegion * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_region_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_region_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_region_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_region_copy() - validating");
		validate_Rdaddress( arg0, "gdk_region_copy - arg0 (region)");
		validate_NULL_TYPETYPE(  arg0, "gdk_region_copy - arg0 (region)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
