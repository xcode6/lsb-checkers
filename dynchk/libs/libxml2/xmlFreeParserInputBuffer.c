// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlFreeParserInputBuffer
static void(*funcptr) (xmlParserInputBufferPtr ) = 0;

extern int __lsb_check_params;
void xmlFreeParserInputBuffer (xmlParserInputBufferPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlFreeParserInputBuffer()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlFreeParserInputBuffer", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlFreeParserInputBuffer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlFreeParserInputBuffer() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlFreeParserInputBuffer - arg0 (in)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
