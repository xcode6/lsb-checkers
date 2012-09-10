// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_hyperlink_get_end_index
static gint(*funcptr) (AtkHyperlink * ) = 0;

extern int __lsb_check_params;
gint atk_hyperlink_get_end_index (AtkHyperlink * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_hyperlink_get_end_index()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_hyperlink_get_end_index");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_hyperlink_get_end_index. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_hyperlink_get_end_index() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_hyperlink_get_end_index - arg0 (link_)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_hyperlink_get_end_index - arg0 (link_)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

