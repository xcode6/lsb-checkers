// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <X11/SM/SMlib.h>
#undef SmsProtocolVersion
static int(*funcptr) (SmsConn ) = 0;

extern int __lsb_check_params;
int SmsProtocolVersion (SmsConn arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsProtocolVersion");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmsProtocolVersion()");
		validate_NULL_TYPETYPE(  arg0, "SmsProtocolVersion - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

