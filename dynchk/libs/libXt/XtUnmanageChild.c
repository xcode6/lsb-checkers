// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Composite.h>
#undef XtUnmanageChild
static void(*funcptr) (Widget ) = 0;

extern int __lsb_check_params;
void XtUnmanageChild (Widget arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtUnmanageChild()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtUnmanageChild");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtUnmanageChild. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtUnmanageChild() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtUnmanageChild - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

