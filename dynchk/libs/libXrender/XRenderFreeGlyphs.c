// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#undef XRenderFreeGlyphs
static void(*funcptr) (Display * , GlyphSet , const Glyph * , int ) = 0;

extern int __lsb_check_params;
void XRenderFreeGlyphs (Display * arg0 , GlyphSet arg1 , const Glyph * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XRenderFreeGlyphs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderFreeGlyphs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderFreeGlyphs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderFreeGlyphs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderFreeGlyphs - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderFreeGlyphs - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "XRenderFreeGlyphs - arg1 (glyphset)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XRenderFreeGlyphs - arg2 (gids)");
		}
		validate_NULL_TYPETYPE(  arg2, "XRenderFreeGlyphs - arg2 (gids)");
		validate_NULL_TYPETYPE(  arg3, "XRenderFreeGlyphs - arg3 (nglyphs)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

