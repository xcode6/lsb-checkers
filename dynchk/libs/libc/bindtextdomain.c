// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <libintl.h>
#undef bindtextdomain
static char *(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
char * bindtextdomain (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "bindtextdomain", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "bindtextdomain()");
		validate_Rdaddress( arg0, "bindtextdomain - arg0");
		validate_NULL_TYPETYPE(  arg0, "bindtextdomain - arg0");
		validate_Rdaddress( arg1, "bindtextdomain - arg1");
		validate_NULL_TYPETYPE(  arg1, "bindtextdomain - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

