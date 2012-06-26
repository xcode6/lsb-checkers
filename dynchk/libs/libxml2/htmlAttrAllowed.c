// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/HTMLparser.h>
#include <libxml2/libxml/xmlstring.h>
#undef htmlAttrAllowed
static htmlStatus(*funcptr) (const htmlElemDesc * , const xmlChar * , int ) = 0;

extern int __lsb_check_params;
htmlStatus htmlAttrAllowed (const htmlElemDesc * arg0 , const xmlChar * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	htmlStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlAttrAllowed()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlAttrAllowed", "LIBXML2_2.5.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlAttrAllowed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlAttrAllowed() - validating");
		validate_Rdaddress( arg0, "htmlAttrAllowed - arg0");
		validate_NULL_TYPETYPE(  arg0, "htmlAttrAllowed - arg0");
		validate_Rdaddress( arg1, "htmlAttrAllowed - arg1");
		validate_NULL_TYPETYPE(  arg1, "htmlAttrAllowed - arg1");
		validate_NULL_TYPETYPE(  arg2, "htmlAttrAllowed - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

