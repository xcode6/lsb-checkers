// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/SM/SMlib.h>
#include <X11/ICE/ICElib.h>
#undef SmsInitialize
static int(*funcptr) (char * , char * , SmsNewClientProc , SmPointer , IceHostBasedAuthProc , int , char * ) = 0;

extern int __lsb_check_params;
int SmsInitialize (char * arg0 , char * arg1 , SmsNewClientProc arg2 , SmPointer arg3 , IceHostBasedAuthProc arg4 , int arg5 , char * arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for SmsInitialize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsInitialize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SmsInitialize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmsInitialize() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "SmsInitialize - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "SmsInitialize - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "SmsInitialize - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "SmsInitialize - arg1");
		validate_NULL_TYPETYPE(  arg2, "SmsInitialize - arg2");
		validate_NULL_TYPETYPE(  arg3, "SmsInitialize - arg3");
		validate_NULL_TYPETYPE(  arg4, "SmsInitialize - arg4");
		validate_NULL_TYPETYPE(  arg5, "SmsInitialize - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "SmsInitialize - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "SmsInitialize - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

