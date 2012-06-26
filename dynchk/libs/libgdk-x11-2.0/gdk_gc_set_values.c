// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_gc_set_values
static void(*funcptr) (GdkGC * , GdkGCValues * , GdkGCValuesMask ) = 0;

extern int __lsb_check_params;
void gdk_gc_set_values (GdkGC * arg0 , GdkGCValues * arg1 , GdkGCValuesMask arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_gc_set_values()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_gc_set_values");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_gc_set_values. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_gc_set_values() - validating");
		validate_RWaddress( arg0, "gdk_gc_set_values - arg0 (gc)");
		validate_NULL_TYPETYPE(  arg0, "gdk_gc_set_values - arg0 (gc)");
		validate_RWaddress( arg1, "gdk_gc_set_values - arg1 (values)");
		validate_NULL_TYPETYPE(  arg1, "gdk_gc_set_values - arg1 (values)");
		validate_NULL_TYPETYPE(  arg2, "gdk_gc_set_values - arg2 (values_mask)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

