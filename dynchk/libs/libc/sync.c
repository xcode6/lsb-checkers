// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <unistd.h>
#undef sync
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void sync ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sync()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

