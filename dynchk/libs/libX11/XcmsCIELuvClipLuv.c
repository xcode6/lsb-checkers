// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xcms.h>
#undef XcmsCIELuvClipLuv
static int(*funcptr) (XcmsCCC , XcmsColor * , unsigned int , unsigned int , int * ) = 0;

extern int __lsb_check_params;
int XcmsCIELuvClipLuv (XcmsCCC arg0 , XcmsColor * arg1 , unsigned int arg2 , unsigned int arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XcmsCIELuvClipLuv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELuvClipLuv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XcmsCIELuvClipLuv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XcmsCIELuvClipLuv() - validating");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIELuvClipLuv - arg0");
		validate_RWaddress( arg1, "XcmsCIELuvClipLuv - arg1");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIELuvClipLuv - arg1");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIELuvClipLuv - arg2");
		validate_NULL_TYPETYPE(  arg3, "XcmsCIELuvClipLuv - arg3");
		validate_RWaddress( arg4, "XcmsCIELuvClipLuv - arg4");
		validate_NULL_TYPETYPE(  arg4, "XcmsCIELuvClipLuv - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

