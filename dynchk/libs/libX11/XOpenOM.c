// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XOpenOM
static XOM(*funcptr) (Display * , struct _XrmHashBucketRec * , const char * , const char * ) = 0;

extern int __lsb_check_params;
XOM XOpenOM (Display * arg0 , struct _XrmHashBucketRec * arg1 , const char * arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	XOM ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XOpenOM ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XOpenOM()");
		validate_RWaddress( arg0, "XOpenOM - arg0");
		validate_NULL_TYPETYPE(  arg0, "XOpenOM - arg0");
		validate_RWaddress( arg1, "XOpenOM - arg1");
		validate_NULL_TYPETYPE(  arg1, "XOpenOM - arg1");
		validate_Rdaddress( arg2, "XOpenOM - arg2");
		validate_NULL_TYPETYPE(  arg2, "XOpenOM - arg2");
		validate_Rdaddress( arg3, "XOpenOM - arg3");
		validate_NULL_TYPETYPE(  arg3, "XOpenOM - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

