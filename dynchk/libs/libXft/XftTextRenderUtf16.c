// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/Xft/Xft.h>
#include <fontconfig/fontconfig.h>
#undef XftTextRenderUtf16
static void(*funcptr) (Display * , int , Picture , XftFont * , Picture , int , int , int , int , const FcChar8 * , FcEndian , int ) = 0;

extern int __lsb_check_params;
void XftTextRenderUtf16 (Display * arg0 , int arg1 , Picture arg2 , XftFont * arg3 , Picture arg4 , int arg5 , int arg6 , int arg7 , int arg8 , const FcChar8 * arg9 , FcEndian arg10 , int arg11 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftTextRenderUtf16()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftTextRenderUtf16");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftTextRenderUtf16. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftTextRenderUtf16() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftTextRenderUtf16 - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftTextRenderUtf16 - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftTextRenderUtf16 - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftTextRenderUtf16 - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XftTextRenderUtf16 - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XftTextRenderUtf16 - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftTextRenderUtf16 - arg4");
		validate_NULL_TYPETYPE(  arg5, "XftTextRenderUtf16 - arg5");
		validate_NULL_TYPETYPE(  arg6, "XftTextRenderUtf16 - arg6");
		validate_NULL_TYPETYPE(  arg7, "XftTextRenderUtf16 - arg7");
		validate_NULL_TYPETYPE(  arg8, "XftTextRenderUtf16 - arg8");
		if( arg9 ) {
		validate_Rdaddress( arg9, "XftTextRenderUtf16 - arg9");
		}
		validate_NULL_TYPETYPE(  arg9, "XftTextRenderUtf16 - arg9");
		validate_NULL_TYPETYPE(  arg10, "XftTextRenderUtf16 - arg10");
		validate_NULL_TYPETYPE(  arg11, "XftTextRenderUtf16 - arg11");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
	__lsb_check_params = reset_flag;
}
