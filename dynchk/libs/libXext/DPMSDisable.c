// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/extensions/dpms.h>
#undef DPMSDisable
static int(*funcptr) (Display * ) = 0;

extern int __lsb_check_params;
int DPMSDisable (Display * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " DPMSDisable ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "DPMSDisable()");
		validate_RWaddress( arg0, "DPMSDisable - arg0");
		validate_NULL_TYPETYPE(  arg0, "DPMSDisable - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

