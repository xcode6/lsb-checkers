// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_unicode_canonical_ordering
static void(*funcptr) (gunichar * , gsize ) = 0;

extern int __lsb_check_params;
void g_unicode_canonical_ordering (gunichar * arg0 , gsize arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_unicode_canonical_ordering()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unicode_canonical_ordering");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unicode_canonical_ordering. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unicode_canonical_ordering() - validating");
		validate_RWaddress( arg0, "g_unicode_canonical_ordering - arg0 (string)");
		validate_NULL_TYPETYPE(  arg0, "g_unicode_canonical_ordering - arg0 (string)");
		validate_NULL_TYPETYPE(  arg1, "g_unicode_canonical_ordering - arg1 (len)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

