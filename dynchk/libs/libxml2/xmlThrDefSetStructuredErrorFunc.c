// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/globals.h>
#undef xmlThrDefSetStructuredErrorFunc
static void(*funcptr) (void * , xmlStructuredErrorFunc ) = 0;

extern int __lsb_check_params;
void xmlThrDefSetStructuredErrorFunc (void * arg0 , xmlStructuredErrorFunc arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlThrDefSetStructuredErrorFunc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlThrDefSetStructuredErrorFunc", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlThrDefSetStructuredErrorFunc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlThrDefSetStructuredErrorFunc() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlThrDefSetStructuredErrorFunc - arg0 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlThrDefSetStructuredErrorFunc - arg0 (ctx)");
		validate_NULL_TYPETYPE(  arg1, "xmlThrDefSetStructuredErrorFunc - arg1 (handler)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

