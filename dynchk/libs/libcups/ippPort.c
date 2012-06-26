// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/ipp.h>
#undef ippPort
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int ippPort ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for ippPort()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ippPort");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ippPort. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ippPort() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

