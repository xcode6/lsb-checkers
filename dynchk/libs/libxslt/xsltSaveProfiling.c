// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <stdio.h>
#include <libxslt/xsltutils.h>
#undef xsltSaveProfiling
static void(*funcptr) (xsltTransformContextPtr , FILE * ) = 0;

extern int __lsb_check_params;
void xsltSaveProfiling (xsltTransformContextPtr arg0 , FILE * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltSaveProfiling()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltSaveProfiling");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSaveProfiling. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSaveProfiling() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSaveProfiling - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xsltSaveProfiling - arg1 (output)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltSaveProfiling - arg1 (output)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

