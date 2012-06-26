// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XCreateGC
static GC(*funcptr) (Display * , Drawable , unsigned long int , XGCValues * ) = 0;

extern int __lsb_check_params;
GC XCreateGC (Display * arg0 , Drawable arg1 , unsigned long int arg2 , XGCValues * arg3 )
{
	int reset_flag = __lsb_check_params;
	GC ret_value  ;
	__lsb_output(4, "Invoking wrapper for XCreateGC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCreateGC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XCreateGC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XCreateGC() - validating");
		validate_RWaddress( arg0, "XCreateGC - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCreateGC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCreateGC - arg1");
		validate_NULL_TYPETYPE(  arg2, "XCreateGC - arg2");
		validate_RWaddress( arg3, "XCreateGC - arg3");
		validate_NULL_TYPETYPE(  arg3, "XCreateGC - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

