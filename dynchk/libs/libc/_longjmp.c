// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <setjmp.h>
#undef _longjmp
static void(*funcptr) (jmp_buf , int ) = 0;

extern int __lsb_check_params;
void _longjmp (jmp_buf arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "_longjmp", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_longjmp()");
		validate_NULL_TYPETYPE(  arg0, "_longjmp - arg0");
		validate_NULL_TYPETYPE(  arg1, "_longjmp - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

