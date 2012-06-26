// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#undef xmlIOHTTPOpenW
static void *(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
void * xmlIOHTTPOpenW (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlIOHTTPOpenW()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlIOHTTPOpenW", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlIOHTTPOpenW. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlIOHTTPOpenW() - validating");
		validate_Rdaddress( arg0, "xmlIOHTTPOpenW - arg0 (post_uri)");
		validate_NULL_TYPETYPE(  arg0, "xmlIOHTTPOpenW - arg0 (post_uri)");
		validate_NULL_TYPETYPE(  arg1, "xmlIOHTTPOpenW - arg1 (compression)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

