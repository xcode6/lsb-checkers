// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_text_get_caret_offset
static gint(*funcptr) (AtkText * ) = 0;

extern int __lsb_check_params;
gint atk_text_get_caret_offset (AtkText * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_text_get_caret_offset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_text_get_caret_offset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_text_get_caret_offset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_text_get_caret_offset() - validating");
		validate_RWaddress( arg0, "atk_text_get_caret_offset - arg0 (text)");
		validate_NULL_TYPETYPE(  arg0, "atk_text_get_caret_offset - arg0 (text)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

