// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_markup_parse_context_free
static void(*funcptr) (GMarkupParseContext * ) = 0;

extern int __lsb_check_params;
void g_markup_parse_context_free (GMarkupParseContext * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_markup_parse_context_free()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_markup_parse_context_free");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_markup_parse_context_free. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_markup_parse_context_free() - validating");
		validate_RWaddress( arg0, "g_markup_parse_context_free - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "g_markup_parse_context_free - arg0 (context)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

