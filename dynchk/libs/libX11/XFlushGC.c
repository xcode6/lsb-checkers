// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XFlushGC
static void(*funcptr) (Display * , GC ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XFlushGC (Display * arg0 , GC arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFlushGC");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XFlushGC()");
	validate_Rdaddress( arg0, "XFlushGC - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFlushGC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XFlushGC - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

