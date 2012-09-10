// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xmd.h>
#include <X11/extensions/dpms.h>
#undef DPMSInfo
static int(*funcptr) (Display * , CARD16 * , BOOL * ) = 0;

extern int __lsb_check_params;
int DPMSInfo (Display * arg0 , CARD16 * arg1 , BOOL * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for DPMSInfo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSInfo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load DPMSInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "DPMSInfo() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "DPMSInfo - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "DPMSInfo - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "DPMSInfo - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "DPMSInfo - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "DPMSInfo - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "DPMSInfo - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

