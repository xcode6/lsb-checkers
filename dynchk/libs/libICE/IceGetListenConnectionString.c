// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
#undef IceGetListenConnectionString
static char *(*funcptr) (IceListenObj ) = 0;

extern int __lsb_check_params;
char * IceGetListenConnectionString (IceListenObj arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " IceGetListenConnectionString ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "IceGetListenConnectionString()");
		validate_NULL_TYPETYPE(  arg0, "IceGetListenConnectionString - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

