// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_region_union
static void(*funcptr) (GdkRegion * , const GdkRegion * ) = 0;

extern int __lsb_check_params;
void gdk_region_union (GdkRegion * arg0 , const GdkRegion * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_region_union()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_region_union");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_region_union. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_region_union() - validating");
		validate_RWaddress( arg0, "gdk_region_union - arg0 (source1)");
		validate_NULL_TYPETYPE(  arg0, "gdk_region_union - arg0 (source1)");
		validate_Rdaddress( arg1, "gdk_region_union - arg1 (source2)");
		validate_NULL_TYPETYPE(  arg1, "gdk_region_union - arg1 (source2)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

