// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <unistd.h>
#undef setkey
static void(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
void setkey (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "setkey", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "setkey()");
		validate_Rdaddress( arg0, "setkey - arg0");
		validate_NULL_TYPETYPE(  arg0, "setkey - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
