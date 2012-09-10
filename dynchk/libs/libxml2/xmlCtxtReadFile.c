// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/parser.h>
#undef xmlCtxtReadFile
static xmlDocPtr(*funcptr) (xmlParserCtxtPtr , const char * , const char * , int ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlCtxtReadFile (xmlParserCtxtPtr arg0 , const char * arg1 , const char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlCtxtReadFile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlCtxtReadFile", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlCtxtReadFile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlCtxtReadFile() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlCtxtReadFile - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlCtxtReadFile - arg1 (filename)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlCtxtReadFile - arg1 (filename)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlCtxtReadFile - arg2 (encoding)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlCtxtReadFile - arg2 (encoding)");
		validate_NULL_TYPETYPE(  arg3, "xmlCtxtReadFile - arg3 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

