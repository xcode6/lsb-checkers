// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
#undef SmcDeleteProperties
static void(*funcptr) (SmcConn , int , char * * ) = 0;

extern int __lsb_check_params;
void SmcDeleteProperties (SmcConn arg0 , int arg1 , char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcDeleteProperties");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "SmcDeleteProperties()");
		validate_NULL_TYPETYPE(  arg0, "SmcDeleteProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmcDeleteProperties - arg1");
		validate_RWaddress( arg2, "SmcDeleteProperties - arg2");
		validate_NULL_TYPETYPE(  arg2, "SmcDeleteProperties - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

