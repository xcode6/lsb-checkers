// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XShm.h>
#undef XShmAttach
static int(*funcptr) (Display * , XShmSegmentInfo * ) = 0;

extern int __lsb_check_params;
int XShmAttach (Display * arg0 , XShmSegmentInfo * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XShmAttach()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShmAttach");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XShmAttach. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XShmAttach() - validating");
		validate_RWaddress( arg0, "XShmAttach - arg0");
		validate_NULL_TYPETYPE(  arg0, "XShmAttach - arg0");
		validate_RWaddress( arg1, "XShmAttach - arg1");
		validate_NULL_TYPETYPE(  arg1, "XShmAttach - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

