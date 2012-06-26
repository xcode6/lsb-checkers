// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_option_context_add_main_entries
static void(*funcptr) (GOptionContext * , const GOptionEntry * , const gchar * ) = 0;

extern int __lsb_check_params;
void g_option_context_add_main_entries (GOptionContext * arg0 , const GOptionEntry * arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_option_context_add_main_entries()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_option_context_add_main_entries");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_option_context_add_main_entries. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_option_context_add_main_entries() - validating");
		validate_RWaddress( arg0, "g_option_context_add_main_entries - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "g_option_context_add_main_entries - arg0 (context)");
		validate_Rdaddress( arg1, "g_option_context_add_main_entries - arg1 (entries)");
		validate_NULL_TYPETYPE(  arg1, "g_option_context_add_main_entries - arg1 (entries)");
		validate_Rdaddress( arg2, "g_option_context_add_main_entries - arg2 (translation_domain)");
		validate_NULL_TYPETYPE(  arg2, "g_option_context_add_main_entries - arg2 (translation_domain)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

