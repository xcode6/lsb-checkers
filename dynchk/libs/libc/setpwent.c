// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <pwd.h>
#undef setpwent
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void setpwent ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "setpwent", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "setpwent()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

