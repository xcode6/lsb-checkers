// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtypes.h>
#include <nspr4/prio.h>
#undef PR_OpenUDPSocket
static PRFileDesc *(*funcptr) (PRIntn ) = 0;

extern int __lsb_check_params;
PRFileDesc * PR_OpenUDPSocket (PRIntn arg0 )
{
	int reset_flag = __lsb_check_params;
	PRFileDesc * ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_OpenUDPSocket()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_OpenUDPSocket");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_OpenUDPSocket. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_OpenUDPSocket() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_OpenUDPSocket - arg0 (af)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
