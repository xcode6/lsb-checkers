// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/ICE/ICElib.h>
#undef IceProtocolSetup
static IceProtocolSetupStatus(*funcptr) (IceConn , int , IcePointer , int , int * , int * , char * * , char * * , int , char * ) = 0;

extern int __lsb_check_params;
IceProtocolSetupStatus IceProtocolSetup (IceConn arg0 , int arg1 , IcePointer arg2 , int arg3 , int * arg4 , int * arg5 , char * * arg6 , char * * arg7 , int arg8 , char * arg9 )
{
	int reset_flag = __lsb_check_params;
	IceProtocolSetupStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for IceProtocolSetup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceProtocolSetup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load IceProtocolSetup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IceProtocolSetup() - validating");
		validate_NULL_TYPETYPE(  arg0, "IceProtocolSetup - arg0");
		validate_NULL_TYPETYPE(  arg1, "IceProtocolSetup - arg1");
		validate_NULL_TYPETYPE(  arg2, "IceProtocolSetup - arg2");
		validate_NULL_TYPETYPE(  arg3, "IceProtocolSetup - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "IceProtocolSetup - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "IceProtocolSetup - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "IceProtocolSetup - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "IceProtocolSetup - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "IceProtocolSetup - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "IceProtocolSetup - arg6");
		if( arg7 ) {
		validate_RWaddress( arg7, "IceProtocolSetup - arg7");
		}
		validate_NULL_TYPETYPE(  arg7, "IceProtocolSetup - arg7");
		validate_NULL_TYPETYPE(  arg8, "IceProtocolSetup - arg8");
		if( arg9 ) {
		validate_RWaddress( arg9, "IceProtocolSetup - arg9");
		}
		validate_NULL_TYPETYPE(  arg9, "IceProtocolSetup - arg9");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}

