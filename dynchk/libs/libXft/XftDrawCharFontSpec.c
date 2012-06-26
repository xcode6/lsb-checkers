// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangoxft.h>
#include <X11/Xft/Xft.h>
#undef XftDrawCharFontSpec
static void(*funcptr) (XftDraw * , const XftColor * , const XftCharFontSpec * , int ) = 0;

extern int __lsb_check_params;
void XftDrawCharFontSpec (XftDraw * arg0 , const XftColor * arg1 , const XftCharFontSpec * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftDrawCharFontSpec()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawCharFontSpec");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawCharFontSpec. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawCharFontSpec() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawCharFontSpec - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawCharFontSpec - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XftDrawCharFontSpec - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftDrawCharFontSpec - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XftDrawCharFontSpec - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XftDrawCharFontSpec - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftDrawCharFontSpec - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

