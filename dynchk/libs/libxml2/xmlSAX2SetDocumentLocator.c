// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/SAX2.h>
#undef xmlSAX2SetDocumentLocator
static void(*funcptr) (void * , xmlSAXLocatorPtr ) = 0;

extern int __lsb_check_params;
void xmlSAX2SetDocumentLocator (void * arg0 , xmlSAXLocatorPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSAX2SetDocumentLocator()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAX2SetDocumentLocator", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAX2SetDocumentLocator. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAX2SetDocumentLocator() - validating");
		validate_RWaddress( arg0, "xmlSAX2SetDocumentLocator - arg0 (ctx)");
		validate_NULL_TYPETYPE(  arg0, "xmlSAX2SetDocumentLocator - arg0 (ctx)");
		validate_NULL_TYPETYPE(  arg1, "xmlSAX2SetDocumentLocator - arg1 (loc)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

