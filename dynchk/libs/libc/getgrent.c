// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <grp.h>
#undef getgrent
static struct group *(*funcptr) () = 0;

extern int __lsb_check_params;
struct group * getgrent ()
{
	int reset_flag = __lsb_check_params;
	struct group * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrent");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

