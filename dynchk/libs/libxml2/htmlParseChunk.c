// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/HTMLparser.h>
#undef htmlParseChunk
static int(*funcptr) (htmlParserCtxtPtr , const char * , int , int ) = 0;

extern int __lsb_check_params;
int htmlParseChunk (htmlParserCtxtPtr arg0 , const char * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlParseChunk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlParseChunk", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlParseChunk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlParseChunk() - validating");
		validate_NULL_TYPETYPE(  arg0, "htmlParseChunk - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "htmlParseChunk - arg1 (chunk)");
		}
		validate_NULL_TYPETYPE(  arg1, "htmlParseChunk - arg1 (chunk)");
		validate_NULL_TYPETYPE(  arg2, "htmlParseChunk - arg2 (size)");
		validate_NULL_TYPETYPE(  arg3, "htmlParseChunk - arg3 (terminate)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

