// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/HTMLparser.h>
#undef htmlTagLookup
static const htmlElemDesc *(*funcptr) (const xmlChar * ) = 0;

extern int __lsb_check_params;
const htmlElemDesc * htmlTagLookup (const xmlChar * arg0 )
{
	int reset_flag = __lsb_check_params;
	const htmlElemDesc * ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlTagLookup()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlTagLookup", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlTagLookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlTagLookup() - validating");
		validate_Rdaddress( arg0, "htmlTagLookup - arg0 (tag)");
		validate_NULL_TYPETYPE(  arg0, "htmlTagLookup - arg0 (tag)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

