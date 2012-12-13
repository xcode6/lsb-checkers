// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gmenumodel.h>
#undef g_menu_attribute_iter_next
static gboolean(*funcptr) (GMenuAttributeIter * ) = 0;

extern int __lsb_check_params;
gboolean g_menu_attribute_iter_next (GMenuAttributeIter * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_menu_attribute_iter_next()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_menu_attribute_iter_next");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_menu_attribute_iter_next. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_menu_attribute_iter_next() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_menu_attribute_iter_next - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_menu_attribute_iter_next - arg0 (iter)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

