// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/ppd.h>
#undef ppdErrorString
static const char *(*funcptr) (ppd_status_t ) = 0;

extern int __lsb_check_params;
const char * ppdErrorString (ppd_status_t arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for ppdErrorString()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ppdErrorString");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ppdErrorString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ppdErrorString() - validating");
		validate_NULL_TYPETYPE(  arg0, "ppdErrorString - arg0 (status)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

