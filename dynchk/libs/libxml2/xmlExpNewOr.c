// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlregexp.h>
#undef xmlExpNewOr
static xmlExpNodePtr(*funcptr) (xmlExpCtxtPtr , xmlExpNodePtr , xmlExpNodePtr ) = 0;

extern int __lsb_check_params;
xmlExpNodePtr xmlExpNewOr (xmlExpCtxtPtr arg0 , xmlExpNodePtr arg1 , xmlExpNodePtr arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlExpNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlExpNewOr()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlExpNewOr", "LIBXML2_2.6.21");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlExpNewOr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlExpNewOr() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlExpNewOr - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlExpNewOr - arg1 (left)");
		validate_NULL_TYPETYPE(  arg2, "xmlExpNewOr - arg2 (right)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

