// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/ICE/ICElib.h>
#undef IceAcceptConnection
static IceConn(*funcptr) (IceListenObj , IceAcceptStatus * ) = 0;

extern int __lsb_check_params;
IceConn IceAcceptConnection (IceListenObj arg0 , IceAcceptStatus * arg1 )
{
	int reset_flag = __lsb_check_params;
	IceConn ret_value  ;
	__lsb_output(4, "Invoking wrapper for IceAcceptConnection()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAcceptConnection");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load IceAcceptConnection. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IceAcceptConnection() - validating");
		validate_NULL_TYPETYPE(  arg0, "IceAcceptConnection - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "IceAcceptConnection - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "IceAcceptConnection - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

