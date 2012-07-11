// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <libxml2/libxml/xmlmemory.h>
#undef xmlMemDisplay
static void(*funcptr) (FILE * ) = 0;

extern int __lsb_check_params;
void xmlMemDisplay (FILE * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlMemDisplay()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlMemDisplay", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlMemDisplay. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlMemDisplay() - validating");
		validate_RWaddress( arg0, "xmlMemDisplay - arg0 (fp)");
		validate_NULL_TYPETYPE(  arg0, "xmlMemDisplay - arg0 (fp)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
