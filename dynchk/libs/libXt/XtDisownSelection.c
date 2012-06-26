// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <X11/X.h>
#undef XtDisownSelection
static void(*funcptr) (Widget , Atom , Time ) = 0;

extern int __lsb_check_params;
void XtDisownSelection (Widget arg0 , Atom arg1 , Time arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtDisownSelection()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtDisownSelection");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtDisownSelection. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtDisownSelection() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtDisownSelection - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtDisownSelection - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtDisownSelection - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

