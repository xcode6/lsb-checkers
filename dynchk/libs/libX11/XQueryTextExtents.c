// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XQueryTextExtents
static int(*funcptr) (Display * , XID , const char * , int , int * , int * , int * , XCharStruct * ) = 0;

extern int __lsb_check_params;
int XQueryTextExtents (Display * arg0 , XID arg1 , const char * arg2 , int arg3 , int * arg4 , int * arg5 , int * arg6 , XCharStruct * arg7 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XQueryTextExtents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryTextExtents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XQueryTextExtents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XQueryTextExtents() - validating");
		validate_RWaddress( arg0, "XQueryTextExtents - arg0");
		validate_NULL_TYPETYPE(  arg0, "XQueryTextExtents - arg0");
		validate_NULL_TYPETYPE(  arg1, "XQueryTextExtents - arg1");
		validate_Rdaddress( arg2, "XQueryTextExtents - arg2");
		validate_NULL_TYPETYPE(  arg2, "XQueryTextExtents - arg2");
		validate_NULL_TYPETYPE(  arg3, "XQueryTextExtents - arg3");
		validate_RWaddress( arg4, "XQueryTextExtents - arg4");
		validate_NULL_TYPETYPE(  arg4, "XQueryTextExtents - arg4");
		validate_RWaddress( arg5, "XQueryTextExtents - arg5");
		validate_NULL_TYPETYPE(  arg5, "XQueryTextExtents - arg5");
		validate_RWaddress( arg6, "XQueryTextExtents - arg6");
		validate_NULL_TYPETYPE(  arg6, "XQueryTextExtents - arg6");
		validate_RWaddress( arg7, "XQueryTextExtents - arg7");
		validate_NULL_TYPETYPE(  arg7, "XQueryTextExtents - arg7");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

