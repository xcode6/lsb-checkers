// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtGetSelectionTimeout
static unsigned long(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
unsigned long XtGetSelectionTimeout ()
{
	int reset_flag = __lsb_check_params;
	unsigned long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetSelectionTimeout");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtGetSelectionTimeout()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

