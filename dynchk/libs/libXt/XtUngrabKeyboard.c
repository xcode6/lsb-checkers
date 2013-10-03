// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/X.h>
#include <X11/Intrinsic.h>
#undef XtUngrabKeyboard
static void(*funcptr) (Widget , Time ) = 0;

extern int __lsb_check_params;
void XtUngrabKeyboard (Widget arg0 , Time arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtUngrabKeyboard()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtUngrabKeyboard");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtUngrabKeyboard. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtUngrabKeyboard() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtUngrabKeyboard - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtUngrabKeyboard - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

