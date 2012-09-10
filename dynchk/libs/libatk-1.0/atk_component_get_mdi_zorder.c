// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_component_get_mdi_zorder
static gint(*funcptr) (AtkComponent * ) = 0;

extern int __lsb_check_params;
gint atk_component_get_mdi_zorder (AtkComponent * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_component_get_mdi_zorder()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_component_get_mdi_zorder");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_component_get_mdi_zorder. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_component_get_mdi_zorder() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_component_get_mdi_zorder - arg0 (component)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_component_get_mdi_zorder - arg0 (component)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

