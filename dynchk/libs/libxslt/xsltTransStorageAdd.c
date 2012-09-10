// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#undef xsltTransStorageAdd
static int(*funcptr) (xsltTransformContextPtr , void * , void * ) = 0;

extern int __lsb_check_params;
int xsltTransStorageAdd (xsltTransformContextPtr arg0 , void * arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltTransStorageAdd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltTransStorageAdd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltTransStorageAdd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltTransStorageAdd() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltTransStorageAdd - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xsltTransStorageAdd - arg1 (id)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltTransStorageAdd - arg1 (id)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xsltTransStorageAdd - arg2 (data)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltTransStorageAdd - arg2 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

