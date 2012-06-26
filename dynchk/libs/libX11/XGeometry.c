// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XGeometry
static int(*funcptr) (Display * , int , const char * , const char * , unsigned int , unsigned int , unsigned int , int , int , int * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
int XGeometry (Display * arg0 , int arg1 , const char * arg2 , const char * arg3 , unsigned int arg4 , unsigned int arg5 , unsigned int arg6 , int arg7 , int arg8 , int * arg9 , int * arg10 , int * arg11 , int * arg12 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGeometry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGeometry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGeometry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGeometry() - validating");
		validate_RWaddress( arg0, "XGeometry - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGeometry - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGeometry - arg1");
		validate_Rdaddress( arg2, "XGeometry - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGeometry - arg2");
		validate_Rdaddress( arg3, "XGeometry - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGeometry - arg3");
		validate_NULL_TYPETYPE(  arg4, "XGeometry - arg4");
		validate_NULL_TYPETYPE(  arg5, "XGeometry - arg5");
		validate_NULL_TYPETYPE(  arg6, "XGeometry - arg6");
		validate_NULL_TYPETYPE(  arg7, "XGeometry - arg7");
		validate_NULL_TYPETYPE(  arg8, "XGeometry - arg8");
		validate_RWaddress( arg9, "XGeometry - arg9");
		validate_NULL_TYPETYPE(  arg9, "XGeometry - arg9");
		validate_RWaddress( arg10, "XGeometry - arg10");
		validate_NULL_TYPETYPE(  arg10, "XGeometry - arg10");
		validate_RWaddress( arg11, "XGeometry - arg11");
		validate_NULL_TYPETYPE(  arg11, "XGeometry - arg11");
		validate_RWaddress( arg12, "XGeometry - arg12");
		validate_NULL_TYPETYPE(  arg12, "XGeometry - arg12");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
	__lsb_check_params = reset_flag;
	return ret_value;
}

