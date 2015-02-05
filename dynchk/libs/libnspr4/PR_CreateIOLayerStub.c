// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#undef PR_CreateIOLayerStub
static PRFileDesc *(*funcptr) (PRDescIdentity , const struct PRIOMethods * ) = 0;

extern int __lsb_check_params;
PRFileDesc * PR_CreateIOLayerStub (PRDescIdentity arg0 , const struct PRIOMethods * arg1 )
{
	int reset_flag = __lsb_check_params;
	PRFileDesc * ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_CreateIOLayerStub()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_CreateIOLayerStub");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_CreateIOLayerStub. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_CreateIOLayerStub() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_CreateIOLayerStub - arg0 (ident)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "PR_CreateIOLayerStub - arg1 (methods)");
		}
		validate_NULL_TYPETYPE(  arg1, "PR_CreateIOLayerStub - arg1 (methods)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
