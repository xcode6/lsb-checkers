// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <X11/X.h>
#include <gtk-2.0/gdk/gdkx.h>
#undef gdk_xid_table_lookup_for_display
static gpointer(*funcptr) (GdkDisplay * , XID ) = 0;

extern int __lsb_check_params;
gpointer gdk_xid_table_lookup_for_display (GdkDisplay * arg0 , XID arg1 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_xid_table_lookup_for_display()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_xid_table_lookup_for_display");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_xid_table_lookup_for_display. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_xid_table_lookup_for_display() - validating");
		validate_RWaddress( arg0, "gdk_xid_table_lookup_for_display - arg0 (display)");
		validate_NULL_TYPETYPE(  arg0, "gdk_xid_table_lookup_for_display - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "gdk_xid_table_lookup_for_display - arg1 (xid)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

