// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XwcDrawText
static void(*funcptr) (Display * , Drawable , GC , int , int , XwcTextItem * , int ) = 0;

extern int __lsb_check_params;
void XwcDrawText (Display * arg0 , Drawable arg1 , GC arg2 , int arg3 , int arg4 , XwcTextItem * arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XwcDrawText()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XwcDrawText");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XwcDrawText. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XwcDrawText() - validating");
		validate_RWaddress( arg0, "XwcDrawText - arg0");
		validate_NULL_TYPETYPE(  arg0, "XwcDrawText - arg0");
		validate_NULL_TYPETYPE(  arg1, "XwcDrawText - arg1");
		validate_NULL_TYPETYPE(  arg2, "XwcDrawText - arg2");
		validate_NULL_TYPETYPE(  arg3, "XwcDrawText - arg3");
		validate_NULL_TYPETYPE(  arg4, "XwcDrawText - arg4");
		validate_RWaddress( arg5, "XwcDrawText - arg5");
		validate_NULL_TYPETYPE(  arg5, "XwcDrawText - arg5");
		validate_NULL_TYPETYPE(  arg6, "XwcDrawText - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

