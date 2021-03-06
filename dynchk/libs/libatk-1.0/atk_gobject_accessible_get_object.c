// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_gobject_accessible_get_object
static GObject *(*funcptr) (AtkGObjectAccessible * ) = 0;

extern int __lsb_check_params;
GObject * atk_gobject_accessible_get_object (AtkGObjectAccessible * arg0 )
{
	int reset_flag = __lsb_check_params;
	GObject * ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_gobject_accessible_get_object()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_gobject_accessible_get_object");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_gobject_accessible_get_object. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_gobject_accessible_get_object() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_gobject_accessible_get_object - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_gobject_accessible_get_object - arg0 (obj)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

