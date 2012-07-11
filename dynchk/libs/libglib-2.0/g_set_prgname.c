// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_set_prgname
static void(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
void g_set_prgname (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_set_prgname()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_set_prgname");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_set_prgname. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_set_prgname() - validating");
		validate_Rdaddress( arg0, "g_set_prgname - arg0 (prgname)");
		validate_NULL_TYPETYPE(  arg0, "g_set_prgname - arg0 (prgname)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
