// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlOutputBufferWriteString
static int(*funcptr) (xmlOutputBufferPtr , const char * ) = 0;

extern int __lsb_check_params;
int xmlOutputBufferWriteString (xmlOutputBufferPtr arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlOutputBufferWriteString()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlOutputBufferWriteString", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlOutputBufferWriteString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlOutputBufferWriteString() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlOutputBufferWriteString - arg0 (out)");
		validate_Rdaddress( arg1, "xmlOutputBufferWriteString - arg1 (str)");
		validate_NULL_TYPETYPE(  arg1, "xmlOutputBufferWriteString - arg1 (str)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

