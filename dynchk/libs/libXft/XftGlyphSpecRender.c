// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/Xft/Xft.h>
#undef XftGlyphSpecRender
static void(*funcptr) (Display * , int , Picture , XftFont * , Picture , int , int , const XftGlyphSpec * , int ) = 0;

extern int __lsb_check_params;
void XftGlyphSpecRender (Display * arg0 , int arg1 , Picture arg2 , XftFont * arg3 , Picture arg4 , int arg5 , int arg6 , const XftGlyphSpec * arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftGlyphSpecRender()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftGlyphSpecRender");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftGlyphSpecRender. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftGlyphSpecRender() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftGlyphSpecRender - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftGlyphSpecRender - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftGlyphSpecRender - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftGlyphSpecRender - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XftGlyphSpecRender - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XftGlyphSpecRender - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftGlyphSpecRender - arg4");
		validate_NULL_TYPETYPE(  arg5, "XftGlyphSpecRender - arg5");
		validate_NULL_TYPETYPE(  arg6, "XftGlyphSpecRender - arg6");
		if( arg7 ) {
		validate_Rdaddress( arg7, "XftGlyphSpecRender - arg7");
		}
		validate_NULL_TYPETYPE(  arg7, "XftGlyphSpecRender - arg7");
		validate_NULL_TYPETYPE(  arg8, "XftGlyphSpecRender - arg8");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

