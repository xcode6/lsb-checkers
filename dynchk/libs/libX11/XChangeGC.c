// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XChangeGC
static int(*funcptr) (Display * , GC , unsigned long int , XGCValues * ) = 0;

extern int __lsb_check_params;
int XChangeGC (Display * arg0 , GC arg1 , unsigned long int arg2 , XGCValues * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XChangeGC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangeGC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XChangeGC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XChangeGC() - validating");
		validate_RWaddress( arg0, "XChangeGC - arg0");
		validate_NULL_TYPETYPE(  arg0, "XChangeGC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XChangeGC - arg1");
		validate_NULL_TYPETYPE(  arg2, "XChangeGC - arg2");
		validate_RWaddress( arg3, "XChangeGC - arg3");
		validate_NULL_TYPETYPE(  arg3, "XChangeGC - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

