// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/encoding.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlAllocParserInputBuffer
static xmlParserInputBufferPtr(*funcptr) (xmlCharEncoding ) = 0;

extern int __lsb_check_params;
xmlParserInputBufferPtr xmlAllocParserInputBuffer (xmlCharEncoding arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlParserInputBufferPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlAllocParserInputBuffer()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlAllocParserInputBuffer", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlAllocParserInputBuffer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlAllocParserInputBuffer() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlAllocParserInputBuffer - arg0 (enc)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

