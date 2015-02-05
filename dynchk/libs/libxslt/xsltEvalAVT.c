// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#undef xsltEvalAVT
static xmlChar *(*funcptr) (xsltTransformContextPtr , void * , xmlNode * ) = 0;

extern int __lsb_check_params;
xmlChar * xsltEvalAVT (xsltTransformContextPtr arg0 , void * arg1 , xmlNode * arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltEvalAVT()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltEvalAVT", "LIBXML2_1.1.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltEvalAVT. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltEvalAVT() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltEvalAVT - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xsltEvalAVT - arg1 (avt)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltEvalAVT - arg1 (avt)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xsltEvalAVT - arg2 (node)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltEvalAVT - arg2 (node)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
