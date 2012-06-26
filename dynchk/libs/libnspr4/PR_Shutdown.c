// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#undef PR_Shutdown
static PRStatus(*funcptr) (PRFileDesc * , PRShutdownHow ) = 0;

extern int __lsb_check_params;
PRStatus PR_Shutdown (PRFileDesc * arg0 , PRShutdownHow arg1 )
{
	int reset_flag = __lsb_check_params;
	PRStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_Shutdown()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_Shutdown");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_Shutdown. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_Shutdown() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PR_Shutdown - arg0 (fd)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_Shutdown - arg0 (fd)");
		validate_NULL_TYPETYPE(  arg1, "PR_Shutdown - arg1 (how)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

