// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef XmbTextPropertyToTextList
static int(*funcptr) (Display * , const XTextProperty * , char * * * , int * ) = 0;

extern int __lsb_check_params;
int XmbTextPropertyToTextList (Display * arg0 , const XTextProperty * arg1 , char * * * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XmbTextPropertyToTextList()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XmbTextPropertyToTextList");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XmbTextPropertyToTextList. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XmbTextPropertyToTextList() - validating");
		validate_RWaddress( arg0, "XmbTextPropertyToTextList - arg0 (display)");
		validate_NULL_TYPETYPE(  arg0, "XmbTextPropertyToTextList - arg0 (display)");
		validate_Rdaddress( arg1, "XmbTextPropertyToTextList - arg1 (text_prop)");
		validate_NULL_TYPETYPE(  arg1, "XmbTextPropertyToTextList - arg1 (text_prop)");
		validate_RWaddress( arg2, "XmbTextPropertyToTextList - arg2 (list_return)");
		validate_NULL_TYPETYPE(  arg2, "XmbTextPropertyToTextList - arg2 (list_return)");
		validate_RWaddress( arg3, "XmbTextPropertyToTextList - arg3 (count_return)");
		validate_NULL_TYPETYPE(  arg3, "XmbTextPropertyToTextList - arg3 (count_return)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

