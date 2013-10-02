// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <netdb.h>
#undef setnetent
static void(*funcptr) (int ) = 0;

extern int __lsb_check_params;
void setnetent (int arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "setnetent", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "setnetent()");
		validate_NULL_TYPETYPE(  arg0, "setnetent - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
