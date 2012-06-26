// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlregexp.h>
#undef xmlExpFree
static void(*funcptr) (xmlExpCtxtPtr , xmlExpNodePtr ) = 0;

extern int __lsb_check_params;
void xmlExpFree (xmlExpCtxtPtr arg0 , xmlExpNodePtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlExpFree()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlExpFree", "LIBXML2_2.6.21");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlExpFree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlExpFree() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlExpFree - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlExpFree - arg1 (expr)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

