// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XSetCommand
static int(*funcptr) (Display * , Window , char * * , int ) = 0;

extern int __lsb_check_params;
int XSetCommand (Display * arg0 , Window arg1 , char * * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XSetCommand ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XSetCommand()");
		validate_RWaddress( arg0, "XSetCommand - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetCommand - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetCommand - arg1");
		validate_RWaddress( arg2, "XSetCommand - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetCommand - arg2");
		validate_NULL_TYPETYPE(  arg3, "XSetCommand - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

