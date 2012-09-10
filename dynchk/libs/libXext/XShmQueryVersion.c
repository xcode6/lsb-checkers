// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XShm.h>
#undef XShmQueryVersion
static int(*funcptr) (Display * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
int XShmQueryVersion (Display * arg0 , int * arg1 , int * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XShmQueryVersion()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShmQueryVersion");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XShmQueryVersion. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XShmQueryVersion() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XShmQueryVersion - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XShmQueryVersion - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XShmQueryVersion - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XShmQueryVersion - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XShmQueryVersion - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XShmQueryVersion - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XShmQueryVersion - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XShmQueryVersion - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

