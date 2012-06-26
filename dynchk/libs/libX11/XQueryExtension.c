// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XQueryExtension
static int(*funcptr) (Display * , const char * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
int XQueryExtension (Display * arg0 , const char * arg1 , int * arg2 , int * arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XQueryExtension()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryExtension");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XQueryExtension. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XQueryExtension() - validating");
		validate_RWaddress( arg0, "XQueryExtension - arg0");
		validate_NULL_TYPETYPE(  arg0, "XQueryExtension - arg0");
		validate_Rdaddress( arg1, "XQueryExtension - arg1");
		validate_NULL_TYPETYPE(  arg1, "XQueryExtension - arg1");
		validate_RWaddress( arg2, "XQueryExtension - arg2");
		validate_NULL_TYPETYPE(  arg2, "XQueryExtension - arg2");
		validate_RWaddress( arg3, "XQueryExtension - arg3");
		validate_NULL_TYPETYPE(  arg3, "XQueryExtension - arg3");
		validate_RWaddress( arg4, "XQueryExtension - arg4");
		validate_NULL_TYPETYPE(  arg4, "XQueryExtension - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

