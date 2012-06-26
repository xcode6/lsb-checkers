// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/SM/SMlib.h>
#undef SmsReturnProperties
static void(*funcptr) (SmsConn , int , SmProp * * ) = 0;

extern int __lsb_check_params;
void SmsReturnProperties (SmsConn arg0 , int arg1 , SmProp * * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for SmsReturnProperties()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsReturnProperties");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SmsReturnProperties. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmsReturnProperties() - validating");
		validate_NULL_TYPETYPE(  arg0, "SmsReturnProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmsReturnProperties - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "SmsReturnProperties - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "SmsReturnProperties - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

