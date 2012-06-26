// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <cups/http.h>
#undef httpGetDateString
static const char *(*funcptr) (time_t ) = 0;

extern int __lsb_check_params;
const char * httpGetDateString (time_t arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for httpGetDateString()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "httpGetDateString");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load httpGetDateString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "httpGetDateString() - validating");
		validate_NULL_TYPETYPE(  arg0, "httpGetDateString - arg0 (t)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

