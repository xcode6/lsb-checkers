// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xcms.h>
#undef XcmsCIELabClipL
static int(*funcptr) (XcmsCCC , XcmsColor * , unsigned int , unsigned int , int * ) = 0;

extern int __lsb_check_params;
int XcmsCIELabClipL (XcmsCCC arg0 , XcmsColor * arg1 , unsigned int arg2 , unsigned int arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XcmsCIELabClipL()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELabClipL");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XcmsCIELabClipL. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XcmsCIELabClipL() - validating");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIELabClipL - arg0");
		validate_RWaddress( arg1, "XcmsCIELabClipL - arg1");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIELabClipL - arg1");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIELabClipL - arg2");
		validate_NULL_TYPETYPE(  arg3, "XcmsCIELabClipL - arg3");
		validate_RWaddress( arg4, "XcmsCIELabClipL - arg4");
		validate_NULL_TYPETYPE(  arg4, "XcmsCIELabClipL - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

