// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xcms.h>
#undef XcmsCreateCCC
static XcmsCCC(*funcptr) (Display * , int , Visual * , XcmsColor * , XcmsCompressionProc , XPointer , XcmsWhiteAdjustProc , XPointer ) = 0;

extern int __lsb_check_params;
XcmsCCC XcmsCreateCCC (Display * arg0 , int arg1 , Visual * arg2 , XcmsColor * arg3 , XcmsCompressionProc arg4 , XPointer arg5 , XcmsWhiteAdjustProc arg6 , XPointer arg7 )
{
	int reset_flag = __lsb_check_params;
	XcmsCCC ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XcmsCreateCCC ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XcmsCreateCCC()");
		validate_RWaddress( arg0, "XcmsCreateCCC - arg0");
		validate_NULL_TYPETYPE(  arg0, "XcmsCreateCCC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsCreateCCC - arg1");
		validate_RWaddress( arg2, "XcmsCreateCCC - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsCreateCCC - arg2");
		validate_RWaddress( arg3, "XcmsCreateCCC - arg3");
		validate_NULL_TYPETYPE(  arg3, "XcmsCreateCCC - arg3");
		validate_NULL_TYPETYPE(  arg4, "XcmsCreateCCC - arg4");
		validate_NULL_TYPETYPE(  arg5, "XcmsCreateCCC - arg5");
		validate_NULL_TYPETYPE(  arg6, "XcmsCreateCCC - arg6");
		validate_NULL_TYPETYPE(  arg7, "XcmsCreateCCC - arg7");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

