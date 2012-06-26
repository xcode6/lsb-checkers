// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XListFonts
static char * *(*funcptr) (Display * , const char * , int , int * ) = 0;

extern int __lsb_check_params;
char * * XListFonts (Display * arg0 , const char * arg1 , int arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	char * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XListFonts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListFonts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XListFonts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XListFonts() - validating");
		validate_RWaddress( arg0, "XListFonts - arg0");
		validate_NULL_TYPETYPE(  arg0, "XListFonts - arg0");
		validate_Rdaddress( arg1, "XListFonts - arg1");
		validate_NULL_TYPETYPE(  arg1, "XListFonts - arg1");
		validate_NULL_TYPETYPE(  arg2, "XListFonts - arg2");
		validate_RWaddress( arg3, "XListFonts - arg3");
		validate_NULL_TYPETYPE(  arg3, "XListFonts - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

