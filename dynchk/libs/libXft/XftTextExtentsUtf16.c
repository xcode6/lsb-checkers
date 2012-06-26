// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#include <fontconfig/fontconfig.h>
#undef XftTextExtentsUtf16
static void(*funcptr) (Display * , XftFont * , const FcChar8 * , FcEndian , int , XGlyphInfo * ) = 0;

extern int __lsb_check_params;
void XftTextExtentsUtf16 (Display * arg0 , XftFont * arg1 , const FcChar8 * arg2 , FcEndian arg3 , int arg4 , XGlyphInfo * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftTextExtentsUtf16()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftTextExtentsUtf16");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftTextExtentsUtf16. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftTextExtentsUtf16() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftTextExtentsUtf16 - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftTextExtentsUtf16 - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XftTextExtentsUtf16 - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftTextExtentsUtf16 - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XftTextExtentsUtf16 - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XftTextExtentsUtf16 - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftTextExtentsUtf16 - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftTextExtentsUtf16 - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XftTextExtentsUtf16 - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XftTextExtentsUtf16 - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

