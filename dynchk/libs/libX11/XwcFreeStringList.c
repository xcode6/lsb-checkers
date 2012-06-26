// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <X11/Xutil.h>
#undef XwcFreeStringList
static void(*funcptr) (wchar_t * * ) = 0;

extern int __lsb_check_params;
void XwcFreeStringList (wchar_t * * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XwcFreeStringList()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XwcFreeStringList");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XwcFreeStringList. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XwcFreeStringList() - validating");
		validate_RWaddress( arg0, "XwcFreeStringList - arg0 (list)");
		validate_NULL_TYPETYPE(  arg0, "XwcFreeStringList - arg0 (list)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

