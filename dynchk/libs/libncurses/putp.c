// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <term.h>
#undef putp
static int(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
int putp (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for putp()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "putp");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load putp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "putp() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "putp - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "putp - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

