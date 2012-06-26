// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlBufferContent
static const xmlChar *(*funcptr) (const xmlBufferPtr ) = 0;

extern int __lsb_check_params;
const xmlChar * xmlBufferContent (const xmlBufferPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	const xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlBufferContent()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlBufferContent", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlBufferContent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlBufferContent() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlBufferContent - arg0 (buf)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

