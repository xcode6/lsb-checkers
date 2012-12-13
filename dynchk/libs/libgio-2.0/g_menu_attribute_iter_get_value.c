// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gmenumodel.h>
#undef g_menu_attribute_iter_get_value
static GVariant *(*funcptr) (GMenuAttributeIter * ) = 0;

extern int __lsb_check_params;
GVariant * g_menu_attribute_iter_get_value (GMenuAttributeIter * arg0 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_menu_attribute_iter_get_value()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_menu_attribute_iter_get_value");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_menu_attribute_iter_get_value. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_menu_attribute_iter_get_value() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_menu_attribute_iter_get_value - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_menu_attribute_iter_get_value - arg0 (iter)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

