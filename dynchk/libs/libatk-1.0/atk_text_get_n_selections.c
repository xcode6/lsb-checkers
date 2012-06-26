// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_text_get_n_selections
static gint(*funcptr) (AtkText * ) = 0;

extern int __lsb_check_params;
gint atk_text_get_n_selections (AtkText * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_text_get_n_selections()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_text_get_n_selections");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_text_get_n_selections. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_text_get_n_selections() - validating");
		validate_RWaddress( arg0, "atk_text_get_n_selections - arg0 (text)");
		validate_NULL_TYPETYPE(  arg0, "atk_text_get_n_selections - arg0 (text)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

