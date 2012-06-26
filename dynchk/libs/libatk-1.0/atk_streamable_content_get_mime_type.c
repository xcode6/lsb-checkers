// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_streamable_content_get_mime_type
static const gchar *(*funcptr) (AtkStreamableContent * , gint ) = 0;

extern int __lsb_check_params;
const gchar * atk_streamable_content_get_mime_type (AtkStreamableContent * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_streamable_content_get_mime_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_streamable_content_get_mime_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_streamable_content_get_mime_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_streamable_content_get_mime_type() - validating");
		validate_RWaddress( arg0, "atk_streamable_content_get_mime_type - arg0 (streamable)");
		validate_NULL_TYPETYPE(  arg0, "atk_streamable_content_get_mime_type - arg0 (streamable)");
		validate_NULL_TYPETYPE(  arg1, "atk_streamable_content_get_mime_type - arg1 (i)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

