// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sane/sane.h>
#undef sane_open
static SANE_Status(*funcptr) (SANE_String_Const , SANE_Handle * ) = 0;

extern int __lsb_check_params;
SANE_Status sane_open (SANE_String_Const arg0 , SANE_Handle * arg1 )
{
	int reset_flag = __lsb_check_params;
	SANE_Status ret_value  ;
	__lsb_output(4, "Invoking wrapper for sane_open()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sane_open");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sane_open. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sane_open() - validating");
		validate_NULL_TYPETYPE(  arg0, "sane_open - arg0 (devicename)");
		if( arg1 ) {
		validate_RWaddress( arg1, "sane_open - arg1 (handle)");
		}
		validate_NULL_TYPETYPE(  arg1, "sane_open - arg1 (handle)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

