// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlOutputBufferCreateFile
static xmlOutputBufferPtr(*funcptr) (FILE * , xmlCharEncodingHandlerPtr ) = 0;

extern int __lsb_check_params;
xmlOutputBufferPtr xmlOutputBufferCreateFile (FILE * arg0 , xmlCharEncodingHandlerPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlOutputBufferPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlOutputBufferCreateFile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlOutputBufferCreateFile", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlOutputBufferCreateFile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlOutputBufferCreateFile() - validating");
		validate_RWaddress( arg0, "xmlOutputBufferCreateFile - arg0 (file)");
		validate_NULL_TYPETYPE(  arg0, "xmlOutputBufferCreateFile - arg0 (file)");
		validate_NULL_TYPETYPE(  arg1, "xmlOutputBufferCreateFile - arg1 (encoder)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

