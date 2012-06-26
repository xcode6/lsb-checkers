// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlregexp.h>
#undef xmlRegFreeRegexp
static void(*funcptr) (xmlRegexpPtr ) = 0;

extern int __lsb_check_params;
void xmlRegFreeRegexp (xmlRegexpPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlRegFreeRegexp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRegFreeRegexp", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRegFreeRegexp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRegFreeRegexp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlRegFreeRegexp - arg0 (regexp)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

