// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef tcgetsid
static pid_t(*funcptr) (int ) = 0;

extern int __lsb_check_params;
pid_t tcgetsid (int arg0 )
{
	int reset_flag = __lsb_check_params;
	pid_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcgetsid");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "tcgetsid - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

