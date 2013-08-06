// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtypes.h>
#include <nspr4/pratom.h>
#undef PR_AtomicSet
static PRInt32(*funcptr) (PRInt32 * , PRInt32 ) = 0;

extern int __lsb_check_params;
PRInt32 PR_AtomicSet (PRInt32 * arg0 , PRInt32 arg1 )
{
	int reset_flag = __lsb_check_params;
	PRInt32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_AtomicSet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_AtomicSet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_AtomicSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_AtomicSet() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PR_AtomicSet - arg0 (val)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_AtomicSet - arg0 (val)");
		validate_NULL_TYPETYPE(  arg1, "PR_AtomicSet - arg1 (newval)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

