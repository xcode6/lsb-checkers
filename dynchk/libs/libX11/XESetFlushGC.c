// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XESetFlushGC
static int(*(*funcptr) )(Display *, GC, XExtCodes *)(Display * , int , int(* )(Display *, GC, XExtCodes *)) = 0;

extern int __lsb_check_params;
int(* XESetFlushGC )(Display *, GC, XExtCodes *)(Display * arg0 , int arg1 , int(* arg2 )(Display *, GC, XExtCodes *))
{
	int reset_flag = __lsb_check_params;
	int(* ret_value  )(Display *, GC, XExtCodes *);
	__lsb_output(4, "Invoking wrapper for XESetFlushGC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetFlushGC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XESetFlushGC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XESetFlushGC() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XESetFlushGC - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XESetFlushGC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XESetFlushGC - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XESetFlushGC - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XESetFlushGC - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

