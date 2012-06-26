// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xmd.h>
#include <X11/extensions/dpms.h>
#undef DPMSSetTimeouts
static int(*funcptr) (Display * , CARD16 , CARD16 , CARD16 ) = 0;

extern int __lsb_check_params;
int DPMSSetTimeouts (Display * arg0 , CARD16 arg1 , CARD16 arg2 , CARD16 arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for DPMSSetTimeouts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSSetTimeouts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load DPMSSetTimeouts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "DPMSSetTimeouts() - validating");
		validate_RWaddress( arg0, "DPMSSetTimeouts - arg0");
		validate_NULL_TYPETYPE(  arg0, "DPMSSetTimeouts - arg0");
		validate_NULL_TYPETYPE(  arg1, "DPMSSetTimeouts - arg1");
		validate_NULL_TYPETYPE(  arg2, "DPMSSetTimeouts - arg2");
		validate_NULL_TYPETYPE(  arg3, "DPMSSetTimeouts - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

