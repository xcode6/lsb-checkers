// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <libintl.h>
#undef textdomain
static char *(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
char * textdomain (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "textdomain");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "textdomain()");
		validate_Rdaddress( arg0, "textdomain - arg0");
		validate_NULL_TYPETYPE(  arg0, "textdomain - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

