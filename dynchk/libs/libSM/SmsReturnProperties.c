// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
#undef SmsReturnProperties
static void(*funcptr) (SmsConn , int , SmProp * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void SmsReturnProperties (SmsConn arg0 , int arg1 , SmProp * * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsReturnProperties");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "SmsReturnProperties()");
		validate_NULL_TYPETYPE(  arg0, "SmsReturnProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmsReturnProperties - arg1");
	validate_RWaddress( arg2, "SmsReturnProperties - arg2");
		validate_NULL_TYPETYPE(  arg2, "SmsReturnProperties - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

