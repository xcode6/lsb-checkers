// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/security.h>
#undef xsltSetDefaultSecurityPrefs
static void(*funcptr) (xsltSecurityPrefsPtr ) = 0;

extern int __lsb_check_params;
void xsltSetDefaultSecurityPrefs (xsltSecurityPrefsPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltSetDefaultSecurityPrefs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltSetDefaultSecurityPrefs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSetDefaultSecurityPrefs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSetDefaultSecurityPrefs() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSetDefaultSecurityPrefs - arg0 (sec)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

