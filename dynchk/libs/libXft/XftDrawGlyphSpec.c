// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft.h>
#include <X11/Xft/Xft.h>
#undef XftDrawGlyphSpec
static void(*funcptr) (XftDraw * , const XftColor * , XftFont * , const XftGlyphSpec * , int ) = 0;

extern int __lsb_check_params;
void XftDrawGlyphSpec (XftDraw * arg0 , const XftColor * arg1 , XftFont * arg2 , const XftGlyphSpec * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftDrawGlyphSpec()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawGlyphSpec");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawGlyphSpec. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawGlyphSpec() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawGlyphSpec - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawGlyphSpec - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XftDrawGlyphSpec - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftDrawGlyphSpec - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XftDrawGlyphSpec - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XftDrawGlyphSpec - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "XftDrawGlyphSpec - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XftDrawGlyphSpec - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftDrawGlyphSpec - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

