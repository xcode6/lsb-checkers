// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdio.h>
#undef funlockfile
static void(*funcptr) (FILE * ) = 0;

extern int __lsb_check_params;
void funlockfile (FILE * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "funlockfile", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "funlockfile()");
		validate_RWaddress( arg0, "funlockfile - arg0");
		validate_NULL_TYPETYPE(  arg0, "funlockfile - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

