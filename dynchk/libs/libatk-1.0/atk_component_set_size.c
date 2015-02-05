// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_component_set_size
static gboolean(*funcptr) (AtkComponent * , gint , gint ) = 0;

extern int __lsb_check_params;
gboolean atk_component_set_size (AtkComponent * arg0 , gint arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_component_set_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_component_set_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_component_set_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_component_set_size() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_component_set_size - arg0 (component)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_component_set_size - arg0 (component)");
		validate_NULL_TYPETYPE(  arg1, "atk_component_set_size - arg1 (width)");
		validate_NULL_TYPETYPE(  arg2, "atk_component_set_size - arg2 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
