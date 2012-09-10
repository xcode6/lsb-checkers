// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_text_set_selection
static gboolean(*funcptr) (AtkText * , gint , gint , gint ) = 0;

extern int __lsb_check_params;
gboolean atk_text_set_selection (AtkText * arg0 , gint arg1 , gint arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_text_set_selection()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_text_set_selection");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_text_set_selection. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_text_set_selection() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_text_set_selection - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_text_set_selection - arg0 (text)");
		validate_NULL_TYPETYPE(  arg1, "atk_text_set_selection - arg1 (selection_num)");
		validate_NULL_TYPETYPE(  arg2, "atk_text_set_selection - arg2 (start_offset)");
		validate_NULL_TYPETYPE(  arg3, "atk_text_set_selection - arg3 (end_offset)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

