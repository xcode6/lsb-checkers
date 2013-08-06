// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prlock.h>
#undef PR_Unlock
static PRStatus(*funcptr) (PRLock * ) = 0;

extern int __lsb_check_params;
PRStatus PR_Unlock (PRLock * arg0 )
{
	int reset_flag = __lsb_check_params;
	PRStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_Unlock()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_Unlock");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_Unlock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_Unlock() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PR_Unlock - arg0 (lock)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_Unlock - arg0 (lock)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

