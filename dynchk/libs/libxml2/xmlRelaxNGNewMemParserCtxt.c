// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/relaxng.h>
#undef xmlRelaxNGNewMemParserCtxt
static xmlRelaxNGParserCtxtPtr(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
xmlRelaxNGParserCtxtPtr xmlRelaxNGNewMemParserCtxt (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlRelaxNGParserCtxtPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlRelaxNGNewMemParserCtxt()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRelaxNGNewMemParserCtxt", "LIBXML2_2.5.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRelaxNGNewMemParserCtxt. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRelaxNGNewMemParserCtxt() - validating");
		validate_Rdaddress( arg0, "xmlRelaxNGNewMemParserCtxt - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg0, "xmlRelaxNGNewMemParserCtxt - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "xmlRelaxNGNewMemParserCtxt - arg1 (size)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

