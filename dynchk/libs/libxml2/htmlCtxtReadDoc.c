// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/HTMLparser.h>
#include <libxml2/libxml/xmlstring.h>
#undef htmlCtxtReadDoc
static htmlDocPtr(*funcptr) (htmlParserCtxtPtr , const xmlChar * , const char * , const char * , int ) = 0;

extern int __lsb_check_params;
htmlDocPtr htmlCtxtReadDoc (htmlParserCtxtPtr arg0 , const xmlChar * arg1 , const char * arg2 , const char * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	htmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlCtxtReadDoc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlCtxtReadDoc", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlCtxtReadDoc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlCtxtReadDoc() - validating");
		validate_NULL_TYPETYPE(  arg0, "htmlCtxtReadDoc - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "htmlCtxtReadDoc - arg1 (cur)");
		}
		validate_NULL_TYPETYPE(  arg1, "htmlCtxtReadDoc - arg1 (cur)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "htmlCtxtReadDoc - arg2 (URL)");
		}
		validate_NULL_TYPETYPE(  arg2, "htmlCtxtReadDoc - arg2 (URL)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "htmlCtxtReadDoc - arg3 (encoding)");
		}
		validate_NULL_TYPETYPE(  arg3, "htmlCtxtReadDoc - arg3 (encoding)");
		validate_NULL_TYPETYPE(  arg4, "htmlCtxtReadDoc - arg4 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

