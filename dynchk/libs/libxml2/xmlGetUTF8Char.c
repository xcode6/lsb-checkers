// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#undef xmlGetUTF8Char
static int(*funcptr) (const unsigned char * , int * ) = 0;

extern int __lsb_check_params;
int xmlGetUTF8Char (const unsigned char * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlGetUTF8Char()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlGetUTF8Char", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlGetUTF8Char. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlGetUTF8Char() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlGetUTF8Char - arg0 (utf)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlGetUTF8Char - arg0 (utf)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xmlGetUTF8Char - arg1 (len)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlGetUTF8Char - arg1 (len)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

