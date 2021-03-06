// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/security.h>
#undef xsltGetDefaultSecurityPrefs
static xsltSecurityPrefsPtr(*funcptr) () = 0;

extern int __lsb_check_params;
xsltSecurityPrefsPtr xsltGetDefaultSecurityPrefs ()
{
	int reset_flag = __lsb_check_params;
	xsltSecurityPrefsPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltGetDefaultSecurityPrefs()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltGetDefaultSecurityPrefs", "LIBXML2_1.0.22");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltGetDefaultSecurityPrefs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltGetDefaultSecurityPrefs() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

