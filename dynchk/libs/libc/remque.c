// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <search.h>
#undef remque
static void(*funcptr) (void * ) = 0;

extern int __lsb_check_params;
void remque (void * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remque");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "remque()");
		validate_RWaddress( arg0, "remque - arg0");
		validate_NULL_TYPETYPE(  arg0, "remque - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

