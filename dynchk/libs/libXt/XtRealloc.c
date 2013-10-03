// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtRealloc
static char *(*funcptr) (char * , Cardinal ) = 0;

extern int __lsb_check_params;
char * XtRealloc (char * arg0 , Cardinal arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtRealloc()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRealloc");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtRealloc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtRealloc() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XtRealloc - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtRealloc - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtRealloc - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

