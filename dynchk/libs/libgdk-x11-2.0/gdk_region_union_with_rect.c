// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_region_union_with_rect
static void(*funcptr) (GdkRegion * , const GdkRectangle * ) = 0;

extern int __lsb_check_params;
void gdk_region_union_with_rect (GdkRegion * arg0 , const GdkRectangle * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_region_union_with_rect()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_region_union_with_rect");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_region_union_with_rect. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_region_union_with_rect() - validating");
		validate_RWaddress( arg0, "gdk_region_union_with_rect - arg0 (region)");
		validate_NULL_TYPETYPE(  arg0, "gdk_region_union_with_rect - arg0 (region)");
		validate_Rdaddress( arg1, "gdk_region_union_with_rect - arg1 (rect)");
		validate_NULL_TYPETYPE(  arg1, "gdk_region_union_with_rect - arg1 (rect)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
