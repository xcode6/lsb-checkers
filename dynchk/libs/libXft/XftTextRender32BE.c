// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/Xft/Xft.h>
#include <fontconfig/fontconfig.h>
#undef XftTextRender32BE
static void(*funcptr) (Display * , int , Picture , XftFont * , Picture , int , int , int , int , const FcChar8 * , int ) = 0;

extern int __lsb_check_params;
void XftTextRender32BE (Display * arg0 , int arg1 , Picture arg2 , XftFont * arg3 , Picture arg4 , int arg5 , int arg6 , int arg7 , int arg8 , const FcChar8 * arg9 , int arg10 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftTextRender32BE()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftTextRender32BE");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftTextRender32BE. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftTextRender32BE() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftTextRender32BE - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftTextRender32BE - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftTextRender32BE - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftTextRender32BE - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XftTextRender32BE - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XftTextRender32BE - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftTextRender32BE - arg4");
		validate_NULL_TYPETYPE(  arg5, "XftTextRender32BE - arg5");
		validate_NULL_TYPETYPE(  arg6, "XftTextRender32BE - arg6");
		validate_NULL_TYPETYPE(  arg7, "XftTextRender32BE - arg7");
		validate_NULL_TYPETYPE(  arg8, "XftTextRender32BE - arg8");
		if( arg9 ) {
		validate_Rdaddress( arg9, "XftTextRender32BE - arg9");
		}
		validate_NULL_TYPETYPE(  arg9, "XftTextRender32BE - arg9");
		validate_NULL_TYPETYPE(  arg10, "XftTextRender32BE - arg10");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
	__lsb_check_params = reset_flag;
}

