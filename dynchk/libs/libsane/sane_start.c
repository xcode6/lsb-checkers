// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sane/sane.h>
#undef sane_start
static SANE_Status(*funcptr) (SANE_Handle ) = 0;

extern int __lsb_check_params;
SANE_Status sane_start (SANE_Handle arg0 )
{
	int reset_flag = __lsb_check_params;
	SANE_Status ret_value  ;
	__lsb_output(4, "Invoking wrapper for sane_start()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sane_start");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sane_start. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sane_start() - validating");
		validate_NULL_TYPETYPE(  arg0, "sane_start - arg0 (handle)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
