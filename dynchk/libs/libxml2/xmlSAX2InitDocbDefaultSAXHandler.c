// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/SAX2.h>
#undef xmlSAX2InitDocbDefaultSAXHandler
static void(*funcptr) (xmlSAXHandler * ) = 0;

extern int __lsb_check_params;
void xmlSAX2InitDocbDefaultSAXHandler (xmlSAXHandler * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSAX2InitDocbDefaultSAXHandler()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAX2InitDocbDefaultSAXHandler", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAX2InitDocbDefaultSAXHandler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAX2InitDocbDefaultSAXHandler() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlSAX2InitDocbDefaultSAXHandler - arg0 (hdlr)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlSAX2InitDocbDefaultSAXHandler - arg0 (hdlr)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

