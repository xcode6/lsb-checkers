// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prinit.h>
#undef PR_Cleanup
static PRStatus(*funcptr) () = 0;

extern int __lsb_check_params;
PRStatus PR_Cleanup ()
{
	int reset_flag = __lsb_check_params;
	PRStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_Cleanup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_Cleanup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_Cleanup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_Cleanup() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

