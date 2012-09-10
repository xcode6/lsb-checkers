// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_editable_text_delete_text
static void(*funcptr) (AtkEditableText * , gint , gint ) = 0;

extern int __lsb_check_params;
void atk_editable_text_delete_text (AtkEditableText * arg0 , gint arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for atk_editable_text_delete_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_editable_text_delete_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_editable_text_delete_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_editable_text_delete_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_editable_text_delete_text - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_editable_text_delete_text - arg0 (text)");
		validate_NULL_TYPETYPE(  arg1, "atk_editable_text_delete_text - arg1 (start_pos)");
		validate_NULL_TYPETYPE(  arg2, "atk_editable_text_delete_text - arg2 (end_pos)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

