// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_option_group_set_translation_domain
static void(*funcptr) (GOptionGroup * , const gchar * ) = 0;

extern int __lsb_check_params;
void g_option_group_set_translation_domain (GOptionGroup * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_option_group_set_translation_domain()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_option_group_set_translation_domain");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_option_group_set_translation_domain. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_option_group_set_translation_domain() - validating");
		validate_RWaddress( arg0, "g_option_group_set_translation_domain - arg0 (group)");
		validate_NULL_TYPETYPE(  arg0, "g_option_group_set_translation_domain - arg0 (group)");
		validate_Rdaddress( arg1, "g_option_group_set_translation_domain - arg1 (domain)");
		validate_NULL_TYPETYPE(  arg1, "g_option_group_set_translation_domain - arg1 (domain)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

