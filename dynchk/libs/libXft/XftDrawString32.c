// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft.h>
#include <X11/Xft/Xft.h>
#undef XftDrawString32
static void(*funcptr) (XftDraw * , const XftColor * , XftFont * , int , int , const FcChar32 * , int ) = 0;

extern int __lsb_check_params;
void XftDrawString32 (XftDraw * arg0 , const XftColor * arg1 , XftFont * arg2 , int arg3 , int arg4 , const FcChar32 * arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftDrawString32()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawString32");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawString32. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawString32() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawString32 - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawString32 - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XftDrawString32 - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftDrawString32 - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XftDrawString32 - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XftDrawString32 - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftDrawString32 - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftDrawString32 - arg4");
		if( arg5 ) {
		validate_Rdaddress( arg5, "XftDrawString32 - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XftDrawString32 - arg5");
		validate_NULL_TYPETYPE(  arg6, "XftDrawString32 - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

