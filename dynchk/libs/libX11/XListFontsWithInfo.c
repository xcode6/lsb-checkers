// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XListFontsWithInfo
static char * *(*funcptr) (Display * , const char * , int , int * , XFontStruct * * ) = 0;

extern int __lsb_check_params;
char * * XListFontsWithInfo (Display * arg0 , const char * arg1 , int arg2 , int * arg3 , XFontStruct * * arg4 )
{
	int reset_flag = __lsb_check_params;
	char * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XListFontsWithInfo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListFontsWithInfo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XListFontsWithInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XListFontsWithInfo() - validating");
		validate_RWaddress( arg0, "XListFontsWithInfo - arg0");
		validate_NULL_TYPETYPE(  arg0, "XListFontsWithInfo - arg0");
		validate_Rdaddress( arg1, "XListFontsWithInfo - arg1");
		validate_NULL_TYPETYPE(  arg1, "XListFontsWithInfo - arg1");
		validate_NULL_TYPETYPE(  arg2, "XListFontsWithInfo - arg2");
		validate_RWaddress( arg3, "XListFontsWithInfo - arg3");
		validate_NULL_TYPETYPE(  arg3, "XListFontsWithInfo - arg3");
		validate_RWaddress( arg4, "XListFontsWithInfo - arg4");
		validate_NULL_TYPETYPE(  arg4, "XListFontsWithInfo - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

